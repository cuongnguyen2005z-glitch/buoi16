#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string ten;
    cout << "Nhap ho ten (co the co khoang trang thua): ";
    getline(cin, ten);

    // Buoc 1: Xoa khoang trang thua
    string tenDaXoaKhoangTrang = "";
    bool truocDoLaKhoangTrang = false;

    for (size_t i = 0; i < ten.length(); i++) {
        char kyTu = ten[i];
        if (isspace(kyTu)) {
            if (!truocDoLaKhoangTrang) {
                tenDaXoaKhoangTrang += ' ';
            }
            truocDoLaKhoangTrang = true;
        } else {
            tenDaXoaKhoangTrang += kyTu;
            truocDoLaKhoangTrang = false;
        }
    }

    size_t batDau = tenDaXoaKhoangTrang.find_first_not_of(' ');
    size_t ketThuc = tenDaXoaKhoangTrang.find_last_not_of(' ');
    if (batDau != string::npos) {
        tenDaXoaKhoangTrang = tenDaXoaKhoangTrang.substr(batDau, ketThuc - batDau + 1);
    }

    // Buoc 2: Viet hoa chu cai dau moi tu
    string tenChuan = tenDaXoaKhoangTrang;
    bool laDauTu = true;
    for (size_t i = 0; i < tenChuan.length(); i++) {
        if (tenChuan[i] == ' ') {
            laDauTu = true;
        } else if (laDauTu) {
            tenChuan[i] = toupper(tenChuan[i]);
            laDauTu = false;
        } else {
            tenChuan[i] = tolower(tenChuan[i]);
        }
    }

    cout << "\nTen goc:              [" << ten << "]" << endl;
    cout << "Sau khi xoa thua:     [" << tenDaXoaKhoangTrang << "]" << endl;
    cout << "Sau khi chuan hoa:    [" << tenChuan << "]" << endl;

    return 0;
}