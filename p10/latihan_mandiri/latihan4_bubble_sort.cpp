#include <iostream>
#include <iomanip>
using namespace std;

const int JUMLAH = 6;

// Prototipe fungsi
int selectionSortMenurun(double nilai[], int jumlah);
void urutkanMenurun(double nilai[], int jumlah, int& jumlahTukar);
void cetakNilai(const double nilai[], int jumlah);

int main() {
    // Nilai akhir sesuai urutan input contoh_masukan.txt
    double nilaiAwal[JUMLAH] = {
        83.97, 67.75, 49.50, 90.00, 71.00, 25.75
    };

    double nilaiSelection[JUMLAH];
    double nilaiBubble[JUMLAH];

    // Menyalin data untuk masing-masing metode
    for (int i = 0; i < JUMLAH; i++) {
        nilaiSelection[i] = nilaiAwal[i];
        nilaiBubble[i] = nilaiAwal[i];
    }

    cout << fixed << setprecision(2);

    cout << "=== PERBANDINGAN SELECTION SORT DAN BUBBLE SORT ===\n";

    cout << "\nData awal:\n";
    cetakNilai(nilaiAwal, JUMLAH);

    // Menggunakan Selection Sort
    int tukarSelection = selectionSortMenurun(
        nilaiSelection, JUMLAH
    );

    cout << "\nHasil Selection Sort:\n";
    cetakNilai(nilaiSelection, JUMLAH);

    cout << "Jumlah pertukaran Selection Sort: "
         << tukarSelection << endl;

    // Menggunakan Bubble Sort
    int tukarBubble = 0;

    urutkanMenurun(nilaiBubble, JUMLAH, tukarBubble);

    cout << "\nHasil Bubble Sort:\n";
    cetakNilai(nilaiBubble, JUMLAH);

    cout << "Jumlah pertukaran Bubble Sort: "
         << tukarBubble << endl;

    return 0;
}

// Fungsi Selection Sort (pengurutan menurun)
int selectionSortMenurun(double nilai[], int jumlah) {
    int jumlahTukar = 0;

    for (int i = 0; i < jumlah - 1; i++) {
        int indeksTerbesar = i;

        for (int j = i + 1; j < jumlah; j++) {
            if (nilai[j] > nilai[indeksTerbesar]) {
                indeksTerbesar = j;
            }
        }

        if (indeksTerbesar != i) {
            double sementara = nilai[i];
            nilai[i] = nilai[indeksTerbesar];
            nilai[indeksTerbesar] = sementara;

            jumlahTukar++;
        }
    }

    return jumlahTukar;
}

// Fungsi Bubble Sort (pengurutan menurun)
void urutkanMenurun(
    double nilai[], int jumlah, int& jumlahTukar
) {
    for (int i = 0; i < jumlah - 1; i++) {
        bool adaTukar = false;

        for (int j = 0; j < jumlah - i - 1; j++) {
            if (nilai[j] < nilai[j + 1]) {
                double sementara = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = sementara;

                jumlahTukar++;
                adaTukar = true;
            }
        }

        // Berhenti jika tidak ada pertukaran
        if (!adaTukar) {
            break;
        }
    }
}

// Fungsi menampilkan isi array
void cetakNilai(const double nilai[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << nilai[i] << " ";
    }

    cout << endl;
}