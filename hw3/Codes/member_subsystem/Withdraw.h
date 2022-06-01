#pragma once
#include "WithdrawUI.h"


class Withdraw {
private:
public:
    Withdraw() {
        WithdrawUI* ui = new WithdrawUI();
        if (nowLogIn == NULL) {
            ui->printWithdrawFail();
            return;
        }
        else {
            string memberId = nowLogIn->deleteMember();
            ui->printMemberId(memberId);
            return;
        }

    }

};