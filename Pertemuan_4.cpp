#include <iostream>
using namespace std;
int main() {
    int hargabarang , jumlahbeli, subtotal, uangbayar,kembalian;
    
    cout << "masukan harga barang : ";cin >> hargabarang;
    cout << "masukan jumlah beli ";cin >>jumlahbeli;
    subtotal = hargabarang * jumlahbeli ;
    cout << "masukan nominal pembayaran : Rp ";cin >>uangbayar;
    kembalian = uangbayar- subtotal ;
    cout <<"Nominal pengembalian : Rp" << kembalian <<endl;

    return 0;
}