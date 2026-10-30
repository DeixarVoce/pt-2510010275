#include <iostream>
using namespace std;

int main() {
    int pilihan = 0;

    do {
        cout << "\n=== MENU PROGRAM ===\n";
        cout << "1. Tampilkan Pesan\n";
        cout << "2. Tampilkan Informasi\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        while (cin.fail() || pilihan < 1 || pilihan > 3) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Itu bukan angka. ";
            } else {
                cin.ignore(1000, '\n');
                cout << "Pilihan harus antara 1 sampai 3. ";
            }

            cout << "Coba lagi: ";
            cin >> pilihan;
        }

        switch (pilihan) {
            case 1:
                cout << "Halo! Selamat belajar C++.\n";
                break;

            case 2:
                cout << "Ini adalah program menu sederhana.\n";
                break;

            case 3:
                cout << "Program selesai.\n";
                break;
        }

    } while (pilihan != 3);

    return 0;
}