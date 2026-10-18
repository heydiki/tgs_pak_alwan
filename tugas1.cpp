
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, sekolah;
    char ulang;

    do {
        cout << "Masukkan nama: ";
        getline(cin, nama);

        cout << "Masukkan nama sekolah: ";
        getline(cin, sekolah);

        cout << "\n=== Data Kamu ===" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Sekolah: " << sekolah << endl;

        cout << "\nApakah mau mengulang? (y/n): ";
        cin >> ulang;
        cin.ignore(10000, '\n');

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai!" << endl;

    return 0;
}
