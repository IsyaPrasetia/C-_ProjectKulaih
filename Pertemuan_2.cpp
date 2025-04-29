#include <iostream>
using namespace std;
int main() {
    string namabarang ;
    int jumlahbarang  ;
    double hargabarang, totalbelanja, diskon, pembayaran, kembalian;
    // input data barang pada terminal
    cout << "masukan nama barang : ";cin >> namabarang;
    cout << "masukan harga barang : Rp ";cin >>hargabarang;
    cout << "masukan jumlah barang : ";cin >>jumlahbarang;
    cout << "masukan nominal pembayaran : Rp ";cin >>pembayaran;
    //Terminal menghitung total belanja
    diskon = 0.1 * ( hargabarang * jumlahbarang );
    totalbelanja = ( hargabarang * jumlahbarang )-diskon;
    kembalian = pembayaran - totalbelanja;
    //Terminal menghasilkan output hasil perhitungan
    cout << "\n===== Rincian Pembelian ====="<< endl;
    cout << "nama barang : " << namabarang <<endl;
    cout << "jumlah barang : " << jumlahbarang <<endl;
    cout << "totalbelanja : Rp" << totalbelanja <<endl;
    cout << "diskon : Rp" << diskon <<endl;
    cout << "pembayaran : Rp" << pembayaran <<endl;
    cout << "kembalian : Rp" << kembalian <<endl;

    return 0;
}