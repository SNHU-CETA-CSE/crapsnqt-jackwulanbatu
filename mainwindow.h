#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <map>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    std::map<int,QImage*> _images;

    void _updateWin();
    void _updateLoss();
    void _updateNeedSecond();

    void _updateScoreResult();

    int _winCount;
    int _loseCount;
    int _bankCount;
    
    int _firstCrap;
};
#endif // MAINWINDOW_H
