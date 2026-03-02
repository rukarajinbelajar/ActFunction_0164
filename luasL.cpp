//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;
float phi = 3.14159;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan r : ";
    cin >> r;
}
//fungsi hitung luas
float LuasLingkaran(int a){
    return a*r^2
}