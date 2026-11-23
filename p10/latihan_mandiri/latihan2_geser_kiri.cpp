#include <iostream>
using namespace std;

const int MAKS = 100;

// Prototipe fungsi
void geserKiri(double nilai[], int& jumlah, int indeks);
void cetakNilai(const double nilai[], int jumlah);

int main() {
    double nilai[MAKS];
    int jumlah;
    int indeks;

    cout << "=== PROGRAM MENGHAPUS ELEMEN ARRAY ===\n";

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
        cout << "Nilai ke-" << i << ": ";
        cin >> nilai[i];
    }

    cout << "\nData sebelum dihapus:\n";
    cetakNilai(nilai, jumlah);

    cout << "\nMasukkan indeks yang ingin dihapus: ";
    cin >> indeks;

    // Memeriksa batas indeks
    if (indeks < 0 || indeks >= jumlah) {
        cout << "Indeks tidak valid.\n";
        return 1;
    }

    // Menghapus elemen
    geserKiri(nilai, jumlah, indeks);

    cout << "\nData setelah dihapus:\n";
    cetakNilai(nilai, jumlah);

    cout << "\nJumlah elemen sekarang: " << jumlah << endl;

    return 0;
}

// Fungsi menghapus elemen dengan menggeser ke kiri
void geserKiri(double nilai[], int& jumlah, int indeks) {
    if (indeks < 0 || indeks >= jumlah) {
        return;
    }

    for (int i = indeks; i < jumlah - 1; i++) {
        nilai[i] = nilai[i + 1];
    }

    jumlah--;
}

// Fungsi menampilkan isi array
void cetakNilai(const double nilai[], int jumlah) {
    if (jumlah == 0) {
        cout << "Tidak ada data.\n";
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "[" << i << "] " << nilai[i] << endl;
    }
}