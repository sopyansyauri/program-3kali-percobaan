#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "PROGRAM MENEBAK ANGKA 5 DENGAN 3 KALI PERCOBAAN"<< endl;
    cout << "================================================" << endl << endl;

    for (int a = 3; a >= 0; a--) {
        cout << "masukan angka 5: ";
        cin >> angka;

        if (angka == 5) {
            cout << "kamu benar" << endl;
            break;
        } else if (angka != 5) {
            if (a == 0) {
                cout << "percobaan kamu telah habis" << endl;
            } else {
            cout << "kamu salah, tapi ada " << a << " percobaan lagi" << endl;
            }
        }
    }
}
