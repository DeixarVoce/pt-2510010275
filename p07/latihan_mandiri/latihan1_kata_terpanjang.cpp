#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    string kata_sekarang = "";
    string kata_terpanjang = "";

    int panjang = kalimat.length();
    for (int i = 0; i < panjang; i++) {
        if (kalimat[i] != ' ') {
            kata_sekarang += kalimat[i];
        } else {
            if (kata_sekarang.length() > kata_terpanjang.length()) {
                kata_terpanjang = kata_sekarang;
            }
            kata_sekarang = "";
        }
    }

    if (kata_sekarang.length() > kata_terpanjang.length()) {
        kata_terpanjang = kata_sekarang;
    }

    cout << "Kata terpanjang: " << kata_terpanjang << endl;
    return 0;
}