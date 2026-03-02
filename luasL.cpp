//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;
float phi = 3.14159;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan jari-jari : ";
    cin >> r;
}
//fungsi hitung luas
float LuasLingkaran(int a){
    return phi*a*a;
}
//prosedur luas lingkaran
void output(){
    cout << " Hasilnya : " <<  LuasLingkaran(r) << endl;
}
//program utama
int main (){
    input();
    output();
}