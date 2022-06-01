#pragma once


// 로그아웃 바운더리 클래스
class LogOutUI {
private:
public:
    void printMemberId(Member* member) {
        ofstream fout("output.txt", ios::app);
        string Id = member->getMemberId();

        fout << "2.2 로그아웃" << "\n";
        fout << "> " << Id << "\n";
        fout.close();
    }

};