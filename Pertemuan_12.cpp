#include <iostream>
using namespace std;

int inputpenjualan (  ) {
    int jumlah;
    cout << "Masukkan Jumlah Unit yang Terjual : ";
    cin >> jumlah;
    return jumlah;
}

int hitungtotalpenjualan ( int jumlah, int hargaperunit) {
    return jumlah * hargaperunit;
}

int hitungdiskon (int totalpenjualan) {
    if (totalpenjualan >= 50000){
        return totalpenjualan * 10/100;
    
    } else if ( totalpenjualan >= 30000){
        return totalpenjualan * 5/100;
    } return 0;
}
int main() {

    const int hargaperunit = 5000;
    cout <<"=== Program Penjualan Sederhana===\n";
    cout <<"Harga Per Unit :" << hargaperunit <<" Rupiah\n";
    
    int jumlahterjual = inputpenjualan ();
    int totalpenjualan = hitungtotalpenjualan ( jumlahterjual , hargaperunit);
    int diskon = hitungdiskon (totalpenjualan);
    int totalsetelahdiskon = totalpenjualan - diskon ;
    
    cout << "Total Penjualan : " <<totalpenjualan << " Rupiah\n";
    cout << "Diskon : " << diskon << " Rupiah\n";
    cout << "Total setelah diskon : " <<totalsetelahdiskon << " Rupiah\n";
    cout << "Terimakasih Telah Berbelanja\n";
    
    return 0;
}