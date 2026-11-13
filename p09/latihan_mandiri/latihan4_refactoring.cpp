// UTS Praktikum Paket A: Parkir Kampus.
// Lengkapi TODO 1 sampai TODO 6 sesuai lembar soal. Bagian yang sudah ada jangan diubah kecuali diminta.
// Bangun dengan baseline kelas; program harus bebas warning. Uji dengan: ./parkir < contoh_masukan.txt
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Deklarasi fungsi
int bacaJumlah();
string bacaPlat();
char bacaJenis();
int bacaDurasi();

int hitungBiaya(char jenis, int durasi, string& nama_jenis,
                int& banyak_motor, int& banyak_mobil);

void cetakDataKendaraan(string plat, string nama_jenis,
                        int durasi, int biaya);

void perbaruiRekap(int biaya, string plat, int& total,
                   int& biaya_tertinggi, string& plat_tertinggi);

void cetakRekap(int jumlah, int banyak_motor, int banyak_mobil,
                int total, int biaya_tertinggi, string plat_tertinggi);

void cetakSebaran(int banyak_motor, int banyak_mobil);

int main() {

    int jumlah = bacaJumlah();

    cout << fixed << setprecision(2);

    int total = 0;
    int banyak_motor = 0;
    int banyak_mobil = 0;
    
    // TODO 5a: deklarasikan penampung biaya tertinggi (mulai -1) dan plat pemiliknya.
    int biaya_tertinggi = -1;
    string plat_tertinggi = "";

    for (int i = 1; i <= jumlah; i++) {
        string plat;
        char jenis = ' ';
        int durasi = 0;

        cout << "\n--- Kendaraan ke-" << i << " dari " << jumlah << " ---\n";

        // TODO 1: baca plat dengan getline sampai sah (tidak kosong dan bukan hanya spasi),
        //         lalu ubah semua hurufnya menjadi huruf besar. Pesan penolakan: "Plat tidak boleh kosong."
        plat = bacaPlat();

        // TODO 2: baca jenis (char), jadikan huruf besar, ulangi selama bukan 'M' atau 'R'.
        //         Pesan penolakan: "Hanya M (motor) atau R (roda empat). Jenis (M/R): "
       jenis = bacaJenis();

        // TODO 3: baca durasi dengan aman (bilangan bulat 1 sampai 24), pola seperti jumlah di atas.
        //         Pesan penolakan: "Harus bilangan bulat 1 sampai 24. Durasi (jam): "
       durasi = bacaDurasi();

        // TODO 4: hitung biaya dan tentukan nama_jenis ("Motor" atau "Mobil"):
        //         biaya = tarif awal + (durasi - 1) * tarif lanjut, lalu dibatasi tarif maksimum jenisnya.
        //         Tambah banyak_motor atau banyak_mobil.
        string nama_jenis;
        int biaya = hitungBiaya(jenis, durasi, nama_jenis,
                                banyak_motor, banyak_mobil);

        // Menampilkan data kendaraan
        cetakDataKendaraan(plat, nama_jenis, durasi, biaya);

        // Memperbarui total pendapatan dan rekap biaya tertinggi
        perbaruiRekap(biaya, plat, total, biaya_tertinggi, plat_tertinggi);
    }

    // Menampilkan rekap
    cetakRekap(jumlah, banyak_motor, banyak_mobil,
           total, biaya_tertinggi, plat_tertinggi);
    
    // TODO 5c: cetak "Tertinggi        : " diikuti plat dan biaya tertinggi dalam kurung 
    cetakSebaran(banyak_motor, banyak_mobil);

    return 0;
}

int bacaJumlah() {
    int jumlah = 0;

    cout << "=== Parkir Kampus ===\n";
    cout << "Jumlah kendaraan: ";
    cin >> jumlah;

    while (cin.fail() || jumlah < 1) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat paling sedikit 1. Jumlah kendaraan: ";
        cin >> jumlah;
    }

    cin.ignore(1000, '\n');
    return jumlah;
}

string bacaPlat() {
    string plat;
    bool platSah;

    cout << "Plat nomor : ";

    do {
        platSah = true;
        getline(cin, plat);

        bool semuaSpasi = true;

        for (char c : plat) {
            if (c != ' ') {
                semuaSpasi = false;
                break;
            }
        }

        if (plat.empty() || semuaSpasi) {
            cout << "Plat tidak boleh kosong.\nPlat nomor : ";
            platSah = false;
        } else {
            for (char &c : plat) {
                c = toupper(c);
            }
        }

    } while (!platSah);

    return plat;
}

char bacaJenis() {
    char jenis = ' ';

    cout << "Jenis (M/R): ";
    cin >> jenis;
    jenis = toupper(jenis);

    while (jenis != 'M' && jenis != 'R') {
        cout << "Hanya M (motor) atau R (roda empat). Jenis (M/R): ";
        cin >> jenis;
        jenis = toupper(jenis);
    }

    return jenis;
}

int bacaDurasi() {
    int durasi = 0;

    cout << "Durasi (jam, 1-24): ";
    cin >> durasi;

    while (cin.fail() || durasi < 1 || durasi > 24) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat 1 sampai 24. Durasi (jam): ";
        cin >> durasi;
    }

    cin.ignore(1000, '\n');
    return durasi;
}

int hitungBiaya(char jenis, int durasi, string& nama_jenis,
                int& banyak_motor, int& banyak_mobil) {

    const int TARIF_AWAL_MOTOR = 2000;
    const int TARIF_LANJUT_MOTOR = 1000;
    const int MAKS_MOTOR = 10000;
    const int TARIF_AWAL_MOBIL = 5000;
    const int TARIF_LANJUT_MOBIL = 3000;
    const int MAKS_MOBIL = 30000;

    int biaya = 0;

    if (jenis == 'M') {
        nama_jenis = "Motor";
        banyak_motor++;

        biaya = TARIF_AWAL_MOTOR + (durasi - 1) * TARIF_LANJUT_MOTOR;

        if (biaya > MAKS_MOTOR) {
            biaya = MAKS_MOTOR;
        }

    } else if (jenis == 'R') {
        nama_jenis = "Mobil";
        banyak_mobil++;

        biaya = TARIF_AWAL_MOBIL + (durasi - 1) * TARIF_LANJUT_MOBIL;

        if (biaya > MAKS_MOBIL) {
            biaya = MAKS_MOBIL;
        }
    }

    return biaya;
}

void cetakDataKendaraan(string plat, string nama_jenis,
                        int durasi, int biaya) {

    cout << "  " << left << setw(12) << plat << setw(8) << nama_jenis
         << right << setw(4) << durasi << " jam" << setw(9) << biaya << "\n";
}

void perbaruiRekap(int biaya, string plat, int& total,
                   int& biaya_tertinggi, string& plat_tertinggi) {

    total += biaya;

    if (biaya > biaya_tertinggi) {
        biaya_tertinggi = biaya;
        plat_tertinggi = plat;
    }
}

void cetakRekap(int jumlah, int banyak_motor, int banyak_mobil,
                int total, int biaya_tertinggi, string plat_tertinggi) {

    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah kendaraan : " << jumlah << "\n";
    cout << "Motor            : " << banyak_motor << "\n";
    cout << "Mobil            : " << banyak_mobil << "\n";
    cout << "Total pendapatan : " << total << "\n";
    cout << "Rata-rata biaya  : " << static_cast<double>(total) / jumlah << "\n";
    cout << "Tertinggi        : " << plat_tertinggi
         << " (" << biaya_tertinggi << ")\n";
}

void cetakSebaran(int banyak_motor, int banyak_mobil) {
    cout << "\nSebaran jenis:\n";

    string label[2] = {"Motor", "Mobil"};
    int jumlah_label[2] = {banyak_motor, banyak_mobil};

    for (int i = 0; i < 2; i++) {
        cout << left << setw(6) << label[i] << "| ";

        for (int j = 0; j < jumlah_label[i]; j++) {
            cout << "#";
        }

        cout << " " << jumlah_label[i] << "\n";
    }
}