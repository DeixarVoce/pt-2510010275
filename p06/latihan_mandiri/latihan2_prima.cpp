#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    bool prima = true;

    if (n <= 1) {
        prima = false;
    } else {
        for (int pembagi = 2; pembagi <= n - 1; pembagi++) {
            if (n % pembagi == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima) {
        cout << n << " adalah bilangan prima.\n";
    } else {
        cout << n << " bukan bilangan prima.\n";
    }

    return 0;
}