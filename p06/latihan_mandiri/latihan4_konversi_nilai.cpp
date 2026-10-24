#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << left << setw(8) << "Nilai"
         << setw(8) << "Huruf"
         << "Keterangan\n";

    cout << "------------------------------\n";

    for (int nilai = 100; nilai >= 0; nilai -= 5) {
        string huruf;
        string keterangan;

        if (nilai >= 80) {
            huruf = "A";
            keterangan = "Sangat baik";
        } else if (nilai >= 75) {
            huruf = "B+";
            keterangan = "Baik";
        } else if (nilai >= 70) {
            huruf = "B";
            keterangan = "Baik";
        } else if (nilai >= 65) {
            huruf = "C+";
            keterangan = "Cukup";
        } else if (nilai >= 60) {
            huruf = "C";
            keterangan = "Cukup";
        } else if (nilai >= 40) {
            huruf = "D";
            keterangan = "Kurang";
        } else {
            huruf = "E";
            keterangan = "Sangat kurang";
        }

        cout << left << setw(8) << nilai
             << setw(8) << huruf
             << keterangan << "\n";
    }

    return 0;
}