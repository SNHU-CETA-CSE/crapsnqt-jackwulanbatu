//
// Created by Arana Fireheart on 2/2/20.
//

#ifndef CRAPSSTARTER_CRAPS_H
#define CRAPSSTARTER_CRAPS_H

#include "ui_CrapsMainWindow.h"
#include "die.h"
#include <QMainWindow>

class CrapsMainWindow : public QMainWindow, private Ui::CrapsMainWindow {
Q_OBJECT

public:
    CrapsMainWindow(QMainWindow *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    Die die1, die2;
    bool firstRoll;
    int winsCount;
    int lossesCount;
    float currentBankValue;
    int currentBet;
    int previousRoll ;
    std::string statusMessage;
    const float payouts[13];

    std::tuple<bool, float> playFirstRoll(int rollValue, float currentBank, int currentBet);
    std::tuple<bool, float> playSecondRoll(int rollValue, int previousRoll, float currentBank, int currentBet);
    float processWin(int rollValue, int rollNumber, float currentBank, int currentBet);
    float processLoss(int rollValue, int rollNumber, float currentBank, int currentBet);
    float calculateCurrentBank(int rollValue, int rollNumber, float currentBank, int currentBet, bool wonBet);
    int processBet(float currentBank);

public Q_SLOTS:
    void rollButtonClickedHandler();

};

#endif //CRAPSSTARTER_CRAPS_H
