#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i;
    char nama[5][20];
    string status[5]; // Perbaikan: Ubah ukuran array status menjadi 5
    float nilai1[5];
    float nilai2[5];
    float hasil[5];

    for (i = 1; i <= 2; i++) {
        cout << " Data Ke - " << i << endl;
        cout << " Nama Siswa : "; cin >> nama[i];
        cout << " Nilai Midtest : "; cin >> nilai1[i];
        cout << " Nilai Final : "; cin >> nilai2[i];
        hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);
        
        // Menentukan status
        if (hasil[i] >= 80) {
            status[i] = "Lolos";
        } else {
            status[i] = "Gagal";
        }
        cout << endl;
    }

    cout << "--------------------------------------------------" << endl;
    cout << " No. Nama Siswa  Nilai      Nilai    Hasil  Status" << endl;
    cout << "                 Midtest    Final    Ujian        " << endl;
    cout << "--------------------------------------------------" << endl;

    for (i = 1; i <= 2; i++) {
        cout << setiosflags(ios::left) << setw(4) << i;
        cout << setiosflags(ios::left) << setw(15) << nama[i]; // Perbaikan: Ubah lebar untuk nama
        cout << setprecision(2) << "      " << nilai1[i];
        cout << setprecision(2) << "    " << nilai2[i];
        cout << setprecision(2) << "     " << hasil[i];
        cout << setiosflags(ios::left) << setw(10) << status[i] << endl; // Perbaikan: Tambahkan tanda << di sini
    }
    cout << "--------------------------------------------------" << endl;

    return 0;
}