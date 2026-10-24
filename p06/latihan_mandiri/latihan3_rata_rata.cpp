#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah nilai: ";
    cin >> n;

    double total = 0;
    int banyak_sah = 0;
    int data_tidak_sah = 0;

    for (int i = 1; i <= n; i++) {
        double nilai;
        cout << "Nilai ke-" << i << ": ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            data_tidak_sah++;
            continue;
        }

        total += nilai;
        banyak_sah++;
    }

    cout << "\nJumlah data tidak sah: " << data_tidak_sah << "\n";

    if (banyak_sah > 0) {
        cout << "Rata-rata nilai sah: " << total / banyak_sah << "\n";
    } else {
        cout << "Tidak ada nilai yang sah.\n";
    }

    return 0;
}