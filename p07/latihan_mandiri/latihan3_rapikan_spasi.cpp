#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    string hasil = "";
    bool awal_kata = true;
    bool spasi_pending = false;

    int panjang = nama.length();

    for (int i = 0; i < panjang; i++) {
        char c = nama[i];

        if (c == ' ') {
            if (hasil.length() > 0) {
                spasi_pending = true;
            }
        } else {
            if (spasi_pending) {
                hasil += ' ';
                awal_kata = true;
                spasi_pending = false;
            }

            if (awal_kata) {
                hasil += static_cast<char>(toupper(c));
                awal_kata = false;
            } else {
                hasil += static_cast<char>(tolower(c));
            }
        }
    }

    cout << "Nama setelah dirapikan: " << hasil << "\n";
    return 0;
}