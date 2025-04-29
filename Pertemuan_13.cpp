#include <iostream>
#include <string>
using namespace std ;

int main() {
    string tipekeanggotaan ;
    
    cout << "=== Program Perpustakaan Sederhana ===" << endl ;
    cout << "\nTipe Keanggotaan Anda (Umum, Mahasiswa, Dosen) : ";
    cin >> tipekeanggotaan ;

    if  ( tipekeanggotaan == "Umum" ) {
        cout << "Batas Maksimal Peminjaman Buku : 2 Buku " << endl;
    } else if ( tipekeanggotaan == "Mahasiswa" ) {
        cout << "Batas Maksimal Peminjaman Buku : 5 Buku " << endl ;
    } else if ( tipekeanggotaan == "Dosen") {
        cout << "Batas Maksimal Peminjaman Buku : 10 Buku "<< endl ;
    } else {
        cout << "Tipe Keaggotaan Tidak Valid" <<endl ;
    }
    cout << "Terimakasih Telah Menggunakan Layanan Perpustakaan Kami" << endl ;


    return 0 ;
}