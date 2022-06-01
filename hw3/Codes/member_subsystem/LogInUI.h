#pragma once

//�α��� �ٿ���� Ŭ����
class LogInUI {
private:
public:
    void printMemberIdPw(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();
        fout << "2.1 로그인" << "\n";
        fout << "> " << Id << " " << Pw << "\n";
        fout.close();
    }

    void printLogInFail() {
        ofstream fout("output.txt", ios::app);
        fout << "2.1 로그인\n";
        fout << "> 일치하는 아이디와 패스워드가 없습니다.\n";
        fout.close();
    }

};
