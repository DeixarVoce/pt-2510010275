#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    int total = 0;
    int i;
    for (i = 1; i <= n; i++) {
        total = total + i;
    }
    cout << "Jumlah dari 1 sampai " << n << " = " << total << "\n";

    return 0;
}