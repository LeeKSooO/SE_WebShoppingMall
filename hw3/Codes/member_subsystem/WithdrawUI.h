#pragma once

class WithdrawUI {
private:
public:

    void printMemberId(string withdrawedId) {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 ȸ��Ż��" << "\n";
        fout << "> " << withdrawedId << "\n";
        fout.close();
    }

    void printWithdrawFail() {
        ofstream fout("output.txt", ios::app);

        fout << "1.2 ȸ��Ż��" << "\n";
        fout << "> ���� �α��� ���°� �ƴմϴ�.\n";
        fout.close();
    }

};