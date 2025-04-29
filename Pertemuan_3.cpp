#include <iostream>
using namespace std;
int main() {

    //Deklarasi variabel untuk menyimpan nilai
    float absensi, tugas, kuis, uts, uas, nilaiAkhir;

    //input nilai dari pengguna
    cout << "Masukkan nilai absensi (0-100) : " ;
    cin >> absensi;
    cout << "Masukkan nilai tugas (0-100) : " ;
    cin >> tugas;    
    cout << "Masukkan nilai kuis (0-100) : " ;
    cin >> kuis;
    cout << "Masukkan nilai uts (0-100) : " ;
    cin >> uts;
    cout << "Masukkan nilai uas (0-100) : " ;
    cin >> uas;

    // menghitung nilaia akhir dengang persentase masing masing komponen
    nilaiAkhir = (absensi * 0.10) + (tugas * 0.20) + (kuis * 0.10) + (uts * 0.30) + (uas * 0.30);

    // Menampilkan hasil nilai akhir
    cout << "Nilai akhir mahasiswa adalah : "<< nilaiAkhir << endl;

    if (nilaiAkhir > 80)
    cout << "Anda Lulus" ;
    else
    cout << "Anda Tidak Lulus";
    cout<<endl ;
    if ( uas >= 75)
    cout << "Grade A";
    else
    cout << "Grade B";

    return 0;

}
