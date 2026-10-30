#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string npm;
    bool sah = false;

    do {
        cout << "Masukkan NPM: ";
        getline(cin, npm);

        int panjang = npm.length();
        bool semua_angka = true;

        for (int i = 0; i < panjang; i++) {
            if (!isdigit(npm[i])) {
                semua_angka = false;
                break;
            }
        }

        if (panjang != 10) {
            cout << "NPM harus terdiri dari 10 karakter.\n";
        } else if (!semua_angka) {
            cout << "NPM hanya boleh berisi angka.\n";
        } else {
            sah = true;
        }

    } while (!sah);

    cout << "NPM valid: " << npm << "\n";

    return 0;
}