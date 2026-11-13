#include <iostream>
#include <string>
using namespace std;

// Prototipe fungsi
string ulang(string teks, int kali);
void cetakSebaran(int a, int b, int c, int d, int e);

int main() {
    cout << "Contoh pengulangan teks:\n";
    cout << ulang("#", 5) << "\n";

    cout << "\nSebaran huruf mutu:\n";
    cetakSebaran(2, 1, 1, 1, 1);

    return 0;
}

// Fungsi untuk mengulang teks
string ulang(string teks, int kali) {
    string hasil = "";

    for (int i = 0; i < kali; i++) {
        hasil += teks;
    }

    return hasil;
}

// Fungsi untuk mencetak sebaran
void cetakSebaran(int a, int b, int c, int d, int e) {
    for (char huruf = 'A'; huruf <= 'E'; huruf++) {
        int banyak = 0;

        if (huruf == 'A') {
            banyak = a;
        } else if (huruf == 'B') {
            banyak = b;
        } else if (huruf == 'C') {
            banyak = c;
        } else if (huruf == 'D') {
            banyak = d;
        } else {
            banyak = e;
        }

        cout << huruf << " | ";
        cout << ulang("#", banyak);
        cout << " " << banyak << "\n";
    }
}