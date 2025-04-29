#include <iostream>
using namespace std;

int main() {
    int harga;
    cout << "Masukkan harga makanan: ";
    cin >> harga;

    // Memastikan harga berada dalam rentang yang diizinkan
    if (harga < 500 || harga > 10000) {
        cout << "Harga harus antara Rp. 500,- hingga Rp. 10.000,-" << endl;
    } 
    else {
        // Menentukan kategori harga
        if (harga < 4000) {
            cout << "Kriteria: Murah" << endl;
        }
        else if (harga > 7500) {
            cout << "Kriteria: Mahal" << endl;
        }
        else {
            cout << "Kriteria: Sedang" << endl;
        
    }

    return 0;
    }
}