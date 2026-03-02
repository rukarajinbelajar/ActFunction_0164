//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;
float phi = 3.14159;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan phi : ";
    cin >> phi;
    cout << "masukkan r : ";
    cin >> r;
}
int LuasLingkaran(int a,int b){
    return a*r^2
}