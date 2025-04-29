#include <iostream>
using namespace std;
int main() {
    float phi = 3.14;
    float diameter, luas, radius;
    cout <<"masukan diamater"; cin>>diameter;
    radius = diameter / 2 ;
    luas = phi * radius * radius ;
    cout <<luas;
    return 0;
}