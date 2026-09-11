#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string chuoi;
    cout << "Nhap mot chuoi: ";
    getline(cin, chuoi);

    int demChu = 0, demSo = 0, demKhoangTrang = 0;

    for (size_t i = 0; i < chuoi.length(); i++) {
        char kyTu = chuoi[i];
        if (isalpha(kyTu)) {
            demChu++;
        } else if (isdigit(kyTu)) {
            demSo++;
        } else if (isspace(kyTu)) {
            demKhoangTrang++;
        }
    }

    cout << "\nSo ky tu chu: " << demChu << endl;
    cout << "So ky tu so: " << demSo << endl;
    cout << "So khoang trang: " << demKhoangTrang << endl;

    return 0;
}