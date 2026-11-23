
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

const int MAKS_KENDARAAN = 100;

const int TARIF_AWAL_MOTOR = 2000;
const int TARIF_LANJUT_MOTOR = 1000;
const int MAKS_MOTOR = 10000;

const int TARIF_AWAL_MOBIL = 5000;
const int TARIF_LANJUT_MOBIL = 3000;
const int MAKS_MOBIL = 30000;

// Prototipe fungsi
int bacaJumlah();
string bacaPlat();
char bacaJenis();
int bacaDurasi();
int hitungBiaya(char jenis, int durasi);

void bacaTransaksi(
    string plat[], char jenis[],
    int durasi[], int biaya[], int jumlah
);

void tukarTeks(string &a, string &b);
void tukarKarakter(char &a, char &b);
void tukarAngka(int &a, int &b);

void urutkanMenurun(
    string plat[], char jenis[],
    int durasi[], int biaya[], int jumlah
);

void cetakTransaksi(
    const string plat[], const char jenis[],
    const int durasi[], const int biaya[], int jumlah
);

void cetakRekap(
    const string plat[], const char jenis[],
    const int biaya[], int jumlah
);

void cetakSebaran(const char jenis[], int jumlah);

int main() {
    // Array untuk menyimpan data kendaraan
    string plat[MAKS_KENDARAAN];
    char jenis[MAKS_KENDARAAN];
    int durasi[MAKS_KENDARAAN];
    int biaya[MAKS_KENDARAAN];

    cout << "=== Parkir Kampus ===\n";

    int jumlah = bacaJumlah();

    // Membaca seluruh transaksi
    bacaTransaksi(plat, jenis, durasi, biaya, jumlah);

    // Mengurutkan transaksi berdasarkan biaya
    urutkanMenurun(plat, jenis, durasi, biaya, jumlah);

    // Menampilkan hasil
    cetakTransaksi(plat, jenis, durasi, biaya, jumlah);
    cetakRekap(plat, jenis, biaya, jumlah);
    cetakSebaran(jenis, jumlah);

    return 0;
}

// Membaca jumlah kendaraan
int bacaJumlah() {
    int jumlah;

    cout << "Jumlah kendaraan: ";
    cin >> jumlah;

    while (cin.fail() || jumlah < 1 ||
           jumlah > MAKS_KENDARAAN) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Harus bilangan bulat 1 sampai "
             << MAKS_KENDARAAN
             << ". Jumlah kendaraan: ";

        cin >> jumlah;
    }

    cin.ignore(1000, '\n');

    return jumlah;
}

// Membaca dan memvalidasi plat nomor
string bacaPlat() {
    string plat;

    cout << "Plat nomor : ";
    getline(cin, plat);

    while (plat.empty() ||
           plat.find_first_not_of(' ') == string::npos) {
        cout << "Plat tidak boleh kosong.\n";
        cout << "Plat nomor : ";
        getline(cin, plat);
    }

    // Mengubah huruf menjadi kapital
    for (char &c : plat) {
        c = static_cast<char>(
            toupper(static_cast<unsigned char>(c))
        );
    }

    return plat;
}

// Membaca jenis kendaraan
char bacaJenis() {
    char jenis;

    cout << "Jenis (M/R): ";
    cin >> jenis;

    jenis = static_cast<char>(
        toupper(static_cast<unsigned char>(jenis))
    );

    while (jenis != 'M' && jenis != 'R') {
        cout << "Hanya M (motor) atau R (roda empat). "
             << "Jenis (M/R): ";

        cin >> jenis;

        jenis = static_cast<char>(
            toupper(static_cast<unsigned char>(jenis))
        );
    }

    cin.ignore(1000, '\n');

    return jenis;
}

// Membaca durasi parkir
int bacaDurasi() {
    int durasi;

    cout << "Durasi (jam, 1-24): ";
    cin >> durasi;

    while (cin.fail() || durasi < 1 || durasi > 24) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Harus bilangan bulat 1 sampai 24. "
             << "Durasi (jam): ";

        cin >> durasi;
    }

    cin.ignore(1000, '\n');

    return durasi;
}

// Menghitung biaya parkir
int hitungBiaya(char jenis, int durasi) {
    int biaya;

    if (jenis == 'M') {
        biaya = TARIF_AWAL_MOTOR +
                (durasi - 1) * TARIF_LANJUT_MOTOR;

        if (biaya > MAKS_MOTOR) {
            biaya = MAKS_MOTOR;
        }
    } else {
        biaya = TARIF_AWAL_MOBIL +
                (durasi - 1) * TARIF_LANJUT_MOBIL;

        if (biaya > MAKS_MOBIL) {
            biaya = MAKS_MOBIL;
        }
    }

    return biaya;
}

// Membaca dan menyimpan seluruh transaksi
void bacaTransaksi(
    string plat[], char jenis[],
    int durasi[], int biaya[], int jumlah
) {
    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Kendaraan ke-" << i + 1
             << " dari " << jumlah << " ---\n";

        plat[i] = bacaPlat();
        jenis[i] = bacaJenis();
        durasi[i] = bacaDurasi();

        biaya[i] = hitungBiaya(jenis[i], durasi[i]);
    }
}

// Menukar dua data teks
void tukarTeks(string &a, string &b) {
    string sementara = a;
    a = b;
    b = sementara;
}

// Menukar dua karakter
void tukarKarakter(char &a, char &b) {
    char sementara = a;
    a = b;
    b = sementara;
}

// Menukar dua angka
void tukarAngka(int &a, int &b) {
    int sementara = a;
    a = b;
    b = sementara;
}

// Mengurutkan transaksi dari biaya terbesar
void urutkanMenurun(
    string plat[], char jenis[],
    int durasi[], int biaya[], int jumlah
) {
    for (int i = 0; i < jumlah - 1; i++) {
        bool adaTukar = false;

        for (int j = 0; j < jumlah - i - 1; j++) {
            if (biaya[j] < biaya[j + 1]) {

                // Menukar semua array yang berpasangan
                tukarTeks(plat[j], plat[j + 1]);
                tukarKarakter(jenis[j], jenis[j + 1]);
                tukarAngka(durasi[j], durasi[j + 1]);
                tukarAngka(biaya[j], biaya[j + 1]);

                adaTukar = true;
            }
        }

        if (!adaTukar) {
            break;
        }
    }
}

// Menampilkan transaksi yang sudah diurutkan
void cetakTransaksi(
    const string plat[], const char jenis[],
    const int durasi[], const int biaya[], int jumlah
) {
    cout << "\n=== Daftar Transaksi "
         << "(Biaya Terbesar ke Terkecil) ===\n";

    for (int i = 0; i < jumlah; i++) {
        string nama_jenis =
            (jenis[i] == 'M') ? "Motor" : "Mobil";

        cout << "  " << left << setw(12) << plat[i]
             << setw(8) << nama_jenis
             << right << setw(4) << durasi[i]
             << " jam" << setw(9) << biaya[i] << "\n";
    }
}

// Menampilkan rekap parkir
void cetakRekap(
    const string plat[], const char jenis[],
    const int biaya[], int jumlah
) {
    int total = 0;
    int banyak_motor = 0;
    int banyak_mobil = 0;

    for (int i = 0; i < jumlah; i++) {
        total += biaya[i];

        if (jenis[i] == 'M') {
            banyak_motor++;
        } else {
            banyak_mobil++;
        }
    }

    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah kendaraan : " << jumlah << "\n";
    cout << "Motor            : " << banyak_motor << "\n";
    cout << "Mobil            : " << banyak_mobil << "\n";
    cout << "Total pendapatan : " << total << "\n";

    cout << fixed << setprecision(2);

    cout << "Rata-rata biaya  : "
         << static_cast<double>(total) / jumlah << "\n";

    // Data pertama merupakan biaya tertinggi
    cout << "Tertinggi        : "
         << plat[0] << " (" << biaya[0] << ")\n";
}

// Menampilkan sebaran jenis kendaraan
void cetakSebaran(const char jenis[], int jumlah) {
    int banyak_motor = 0;
    int banyak_mobil = 0;

    for (int i = 0; i < jumlah; i++) {
        if (jenis[i] == 'M') {
            banyak_motor++;
        } else {
            banyak_mobil++;
        }
    }

    string label[2] = {"Motor", "Mobil"};
    int jumlah_label[2] = {banyak_motor, banyak_mobil};

    cout << "\nSebaran jenis:\n";

    for (int i = 0; i < 2; i++) {
        cout << left << setw(6) << label[i] << "| ";

        for (int j = 0; j < jumlah_label[i]; j++) {
            cout << "#";
        }

        cout << " " << jumlah_label[i] << "\n";
    }
}