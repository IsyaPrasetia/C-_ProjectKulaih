#include <iostream>
using namespace std;
int main() {
    //Jenis Tipe Data dan Varibel
    int hasil, x , y;
    //Masukkan Nilai X
    cout<<"masukkan nilai X :" ; cin >> x ;
    //Masukkan Nilai Y
    cout<<"masukkan nilai y :" ; cin >> y ;
    //Kondisi yang diperlukan
    if ( x < y) {
        hasil = x;
    }
    else {
        hasil = y;
    }
    //Output dari program
    cout << "Hasil tersebut ialah :"<<hasil;

    return 0;
}