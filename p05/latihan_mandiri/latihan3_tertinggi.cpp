#include <iostream>
using namespace std;

int main() {
    double nilai;
    double tertinggi = -1;

    cout << "Masukkan nilai (angka negatif untuk selesai): ";
    cin >> nilai;

    while (nilai >= 0) {
        if (nilai > tertinggi) {
            tertinggi = nilai;
        }

        cout << "Masukkan nilai (angka negatif untuk selesai): ";
        cin >> nilai;
    }

    if (tertinggi >= 0) {
        cout << "Nilai tertinggi: " << tertinggi << "\n";
    } else {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    }

    return 0;
}