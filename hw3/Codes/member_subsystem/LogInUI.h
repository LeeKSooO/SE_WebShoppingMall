#pragma once

//�α��� �ٿ���� Ŭ����
class LogInUI {
private:
public:
    void printMemberIdPw(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();
        string Pw = member->getMemberPw();
        fout << "2.1 �α���" << "\n";
        fout << "> " << Id << " " << Pw << "\n";
        fout.close();
    }

    void printLogInFail() {
        ofstream fout("output.txt", ios::app);
        fout << "2.1 �α���\n";
        fout << "> ��ġ�ϴ� ���̵�� �н����尡 �����ϴ�.\n";
        fout.close();
    }

};
