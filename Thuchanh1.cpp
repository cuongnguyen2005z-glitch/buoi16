#include <iostream>
using namespace std;

int main() {
    int tuoi;
    string hoTen;

    cout << "Nhap tuoi: ";
    cin >> tuoi;

    cin.ignore();

    cout << "Nhap ho ten day du: ";
    getline(cin, hoTen);

    cout << "\nThong tin da nhap:" << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Tuoi: " << tuoi << endl;

    return 0;
}