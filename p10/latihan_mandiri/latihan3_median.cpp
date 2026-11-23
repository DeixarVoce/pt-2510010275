#include <iostream>
using namespace std;

const int MAKS = 100;

// Prototipe fungsi
double median(const double nilai[], int jumlah);

int main() {
    double nilai[MAKS];
    int jumlah;

    cout << "=== PROGRAM MENGHITUNG MEDIAN ===\n";

    cout << "Masukkan jumlah nilai (1-100): ";
    if (!(cin >> jumlah)) {
        cout << "Input harus berupa angka.\n";
        return 1;
    }

    if (jumlah < 1 || jumlah > MAKS) {
        cout << "Jumlah nilai tidak valid.\n";
        return 1;
    }

    // Mengisi array
    for (int i = 0; i < jumlah; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        if (!(cin >> nilai[i])) {
            cout << "Input nilai tidak valid.\n";
            return 1;
        }
    }

    // Menampilkan data awal
    cout << "\nData sebelum diurutkan:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nilai[i] << " ";
    }

    // Menghitung median
    double hasil = median(nilai, jumlah);

    cout << "\n\nNilai median: " << hasil << endl;

    // Memastikan array asli tidak berubah
    cout << "\nData asli setelah fungsi median dijalankan:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nilai[i] << " ";
    }

    cout << endl;

    return 0;
}

// Fungsi menghitung median
double median(const double nilai[], int jumlah) {
    if (jumlah <= 0 || jumlah > MAKS) {
        return 0.0;
    }

    // Menyalin array asli ke array lokal
    double salinan[MAKS];

    for (int i = 0; i < jumlah; i++) {
        salinan[i] = nilai[i];
    }

    // Mengurutkan salinan dari kecil ke besar
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (salinan[j] > salinan[j + 1]) {
                double sementara = salinan[j];
                salinan[j] = salinan[j + 1];
                salinan[j + 1] = sementara;
            }
        }
    }

    // Jika jumlah data ganjil
    if (jumlah % 2 == 1) {
        return salinan[jumlah / 2];
    }

    // Jika jumlah data genap
    return (salinan[jumlah / 2 - 1] +
            salinan[jumlah / 2]) / 2.0;
}