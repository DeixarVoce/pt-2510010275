
#include <iostream>
using namespace std;

// Deklarasi fungsi
void tambahPendapatan(int biaya, int& total_pendapatan);
void cetakTotal(int total_pendapatan);

int main() {
    // Variabel lokal di dalam main
    int total_pendapatan = 0;

    int biaya_motor = 3000;
    int biaya_mobil = 30000;

    // Menambahkan pendapatan melalui fungsi
    tambahPendapatan(biaya_motor, total_pendapatan);
    tambahPendapatan(biaya_mobil, total_pendapatan);

    // Menampilkan total pendapatan
    cetakTotal(total_pendapatan);

    return 0;
}

// Fungsi untuk menambahkan pendapatan
void tambahPendapatan(int biaya, int& total_pendapatan) {
    total_pendapatan += biaya;
}

// Fungsi untuk menampilkan pendapatan
void cetakTotal(int total_pendapatan) {
    cout << "=== Pendapatan Parkir ===\n";
    cout << "Total pendapatan: Rp" << total_pendapatan << "\n";
}
