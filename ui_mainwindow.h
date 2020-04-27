/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBoxBet;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelBankCount;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *labelWinCount;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *labelLossCount;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelStatus;
    QPushButton *pushButton;
    QLabel *labelFirstCrap;
    QLabel *labelLastCrap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1400, 935);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(540, 60, 165, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBoxBet = new QComboBox(gridLayoutWidget);
        comboBoxBet->setObjectName(QString::fromUtf8("comboBoxBet"));

        gridLayout->addWidget(comboBoxBet, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        labelBankCount = new QLabel(gridLayoutWidget);
        labelBankCount->setObjectName(QString::fromUtf8("labelBankCount"));

        gridLayout->addWidget(labelBankCount, 1, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 130, 141, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        labelWinCount = new QLabel(verticalLayoutWidget);
        labelWinCount->setObjectName(QString::fromUtf8("labelWinCount"));
        labelWinCount->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWinCount);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1030, 140, 141, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        labelLossCount = new QLabel(verticalLayoutWidget_2);
        labelLossCount->setObjectName(QString::fromUtf8("labelLossCount"));
        labelLossCount->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelLossCount);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(520, 730, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelStatus = new QLabel(verticalLayoutWidget_3);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelStatus);

        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        labelFirstCrap = new QLabel(centralwidget);
        labelFirstCrap->setObjectName(QString::fromUtf8("labelFirstCrap"));
        labelFirstCrap->setGeometry(QRect(190, 350, 241, 241));
        labelLastCrap = new QLabel(centralwidget);
        labelLastCrap->setObjectName(QString::fromUtf8("labelLastCrap"));
        labelLastCrap->setGeometry(QRect(830, 350, 241, 241));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1400, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your Bet", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "YouBank:", nullptr));
        labelBankCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "WinCount", nullptr));
        labelWinCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "LossCount", nullptr));
        labelLossCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelFirstCrap->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelLastCrap->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
