#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;

    cout << "Masukkan kata: ";
    cin >> kata;

    int panjang = kata.length();
    bool palindrom = true;

    for (int i = 0; i < panjang / 2; i++) {
        if (kata[i] != kata[panjang - 1 - i]) {
            palindrom = false;
            break;
        }
    }
    if (palindrom) {
        cout << kata << " adalah palindrom." << endl;
    } else {
        cout << kata << " bukan palindrom." << endl;
    }
    return 0;
}