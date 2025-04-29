#include <iostream>
using namespace std;
int main ()
{
    int harga = 100;
    int jumlah = 5;
    int total;
    int diskon;

    total = harga * jumlah;
    diskon = 0.1 * total;

    cout<<"harga barang adalah : " <<harga<<endl;
    cout<<"jumlah barang adalah : " <<jumlah<<endl;
    cout<<"total barang adalah : " <<total<<endl;
    cout<<"diskon barang adalah : " <<diskon;
}