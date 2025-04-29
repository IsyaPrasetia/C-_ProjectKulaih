#include <iostream>
using namespace std ;

int main() {
    string nama ;
    int jamKerja ;
    double gajiPerJam = 50000 ; // gaji per jam (Rp)
    double gaji, lembur = 0 ;
    char lanjut ;
    
    cout << "=== Program Penggajian Karyawan ===" << endl ;
    do {
        cout << "\nMasukkan nama karyawan : ";
        cin >> nama ;
        cout << " Masukkan jumlah jam kerja: " ;
        cin >> jamKerja ;
        
        // Perhitungan Gaji
        if  ( jamKerja > 40) {
            // lembur dihitung jika lebih dari 40 jam 
            lembur = ( jamKerja - 40) * ( gajiPerJam * 1.5) ;
            gaji = ( 40 * gajiPerJam ) + lembur ;
        } else {
            //Tidak ada lembur
            gaji = jamKerja * gajiPerJam;
        }
        
        cout << "\n--- Rincian Gaji ---" << endl ;
        cout << " Nama Karyawan " << nama << endl ;
        cout << " Jam Kerja " << jamKerja << endl ;
        cout << " Gaji Pokok : Rp " << ( jamKerja > 40 ? 40 * gajiPerJam : jamKerja * gajiPerJam ) << endl;
        if ( lembur > 0 ) {
            cout << "Lembur : Rp" << lembur << endl ;
            }
        cout << "Total Gaji : " << gaji << endl ;
        cout << "\nApakah ingin menghitung gaji karyawan lain ? (y/n) : " ;
        cin >> lanjut ;
        
    } while ( lanjut == 'y' || lanjut == 'Y' ) ;
    
    cout << "\nProgram selesai. Terimakasih !\n";
    return 0 ;
}