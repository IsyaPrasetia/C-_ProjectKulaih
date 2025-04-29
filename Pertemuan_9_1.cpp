#include <iostream>
using namespace std;

int main() {
    double harga ;
    int kodeKamar ;
    // Menampilkan pilihan kode kamar
    cout << "Masukkan kode kamar (1-3): " << endl;
    cout << "1. Kamar Standard" << endl;
    cout << "2. Kamar Deluxe" << endl;
    cout << "3. Kamar Suite"  << endl;
    cout << "Masukkan kode kamar: "; cin >> kodeKamar ;

    // Menggunakan switch case untuk menentukan harga kamar
    switch ( kodeKamar ) {
        case 1:
            harga = 300000; // Harga kamar Standard
            cout << "Harga kamar Standard: Rp " << harga << endl;
            break;
        case 2:
            harga = 500000; // Harga kamar Deluxe
            cout << "Harga kamar Deluxe: Rp " << harga << endl;
            break;
        case 3:
            harga = 1000000; // Harga kamar Suite
            cout << "Harga kamar Suite: Rp " << harga << endl;
            break;
        default:
            cout << "Kode kamar tidak valid!" << endl;
            break;
    }

    return 0;
}