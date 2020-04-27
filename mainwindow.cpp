#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QImage>
#include <QString>

#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <fstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    srand(time(0));
    _bankCount = 0;
    _winCount = 0;
    _loseCount = 0;
    _firstCrap = 0;
    for(int i=1; i<=6; ++i)
    {
        QImage* img = new QImage();

        img->load(QString(":/res/%1.png").arg(i));
        _images.insert(std::make_pair(i, img));
    }

    ui->setupUi(this);
    ui->labelFirstCrap->setScaledContents(true);
    ui->labelFirstCrap->setPixmap(QPixmap::fromImage(*_images[1]));
    ui->labelLastCrap->setScaledContents(true);
    ui->labelLastCrap->setPixmap(QPixmap::fromImage(*_images[1]));
    ui->pushButton->setText(QString("Roll"));
    ui->labelStatus->setText(QString(""));

    ui->comboBoxBet->setEditable(true);
    ifstream ifs;
    ifs.open("result.txt", ios::in);
    if (!ifs.good())
    {
        _bankCount = 100;
        _loseCount = 0;
        _winCount = 0;
        return;
    }
    else
    {
        string strx;
        getline(ifs, strx);
        _bankCount = atoi(strx.c_str());
        getline(ifs, strx);
        _winCount = atoi(strx.c_str());
        getline(ifs, strx);
        _loseCount = atoi(strx.c_str());
    }

    ui->labelBankCount->setText(QString::fromStdString(to_string(_bankCount)));
    ui->labelWinCount->setText(QString::fromStdString(to_string(_winCount)));
    ui->labelLossCount->setText(QString::fromStdString(to_string(_loseCount)));
    ui->comboBoxBet->clear();
    for(int i=1; i<=_bankCount;++i)
    {
        ui->comboBoxBet->addItem(QString::fromStdString(to_string(i)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    for(auto it = _images.begin();it!=_images.end();++it)
    {
        delete it->second;
    }
    _images.clear();

    ofstream ofs;
    ofs.open("result.txt", ios::out);
    ofs << to_string(_bankCount) << endl
        << to_string(_winCount) << endl
        << to_string(_loseCount) << endl;
}


void MainWindow::on_pushButton_clicked()
{
    int t1 = rand() % 6;
    t1 += 1;
    int t2 = rand() % 6;
    t2 += 1;
    ui->labelFirstCrap->setPixmap(QPixmap::fromImage(*_images[t1]));
    ui->labelLastCrap->setPixmap(QPixmap::fromImage(*_images[t2]));
    int total = t1 + t2;
    if (_firstCrap == 0) //this is the first crap
    {
        if (total== 7 || total == 11) //first roll win, 1:1
        {
            _bankCount += ui->comboBoxBet->currentIndex() + 1;
            _updateWin();
        }
        else if (total == 2 || total == 3 || total == 12) // lose 
        {
            _bankCount -= ui->comboBoxBet->currentIndex() + 1;
            _updateLoss();
        }
        else
        {
            _firstCrap = total;
            _updateNeedSecond();
        }
    }
    else
    {
        if (_firstCrap == total) //you win
        {
            switch (total)
            {
            case 4:
            case 10:
            {
                _bankCount += 2 * (ui->comboBoxBet->currentIndex() + 1);
            }break;
            case 5:
            case 9:
            {
                _bankCount += 1.5*(ui->comboBoxBet->currentIndex() + 1);
            }break;
            case 6:
            case 8:
            {
                _bankCount += 1.2*(ui->comboBoxBet->currentIndex() + 1);
            }break;
            default:
                break;
            }
            _updateWin();
        }
        else //you lose
        {
            _bankCount -= (ui->comboBoxBet->currentIndex() + 1);
            _updateLoss();
        }
        _firstCrap = 0;
    }
}

void MainWindow::_updateWin()
{
    ui->labelStatus->setText("You Win!");
    ui->pushButton->setText("Play Again");
    _winCount += 1;
    _updateScoreResult();
}

void MainWindow::_updateLoss()
{
    ui->labelStatus->setText("You Lose!");
    ui->pushButton->setText("Play");
    _loseCount += 1;
    _updateScoreResult();
}

void MainWindow::_updateNeedSecond()
{
    ui->labelStatus->setText(QString::fromStdString(to_string(_firstCrap)));
    ui->pushButton->setText("Play Second");
}

void MainWindow::_updateScoreResult()
{
    ui->labelWinCount->setText(QString::fromStdString(to_string(_winCount)));
    ui->labelLossCount->setText(QString::fromStdString(to_string(_loseCount)));
    ui->labelBankCount->setText(QString::fromStdString(to_string(_bankCount)));
    ui->comboBoxBet->clear();
    for (int i = 1; i < _bankCount; ++i)
    {
        ui->comboBoxBet->addItem(QString::fromStdString(to_string(i)));
    }
}
