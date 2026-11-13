#include <iostream>
using namespace std;

// Prototipe fungsi
void statistik(double a, double b, double c,
               double& terbesar, double& terkecil, double& rerata);

double hitungRerata(double a, double b, double c);

int main() {
    double terbesar, terkecil, rerata;

    statistik(80, 70, 90, terbesar, terkecil, rerata);

    cout << "Hasil Statistik:\n";
    cout << "Nilai terbesar : " << terbesar << endl;
    cout << "Nilai terkecil : " << terkecil << endl;
    cout << "Rata-rata      : " << rerata << endl;

    cout << "\nRata-rata menggunakan return: "
         << hitungRerata(80, 70, 90) << endl;

    return 0;
}

// Fungsi statistik menggunakan pass by reference
void statistik(double a, double b, double c,
               double& terbesar, double& terkecil, double& rerata) {

    terbesar = a;
    terkecil = a;

    if (b > terbesar) {
        terbesar = b;
    }

    if (c > terbesar) {
        terbesar = c;
    }

    if (b < terkecil) {
        terkecil = b;
    }

    if (c < terkecil) {
        terkecil = c;
    }

    rerata = (a + b + c) / 3.0;
}

// Fungsi rata-rata menggunakan return
double hitungRerata(double a, double b, double c) {
    return (a + b + c) / 3.0;
}