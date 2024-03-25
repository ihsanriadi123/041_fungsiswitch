#include <iostream>
using namespace std;

int bilsatu, bildua;


void input() {
    cout << "masukkan bilangan pertama = ";
    cin >> bilsatu;
    cout << "Masukkan bilangan kedua = ";
    cin >> bildua;
}

float penjumlahan(float a, float b) {
    return a + b;
}


float pembagian(float a, float b) {
    return a / b;

}

float perkalian(float a, float b) {
    return a * b;

}

float pengurangan(float a, float b) {
    return a - b;
}

int main() {

    int pilihan;

do {
        cout << "=========================" << endl;
        cout << "Menu" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pembagian" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pengurangan" << endl;
        cout << "5. exit" << endl;
        cout << "Masukkan pilihan 1/2/3/4/5 = ";
        cin >> pilihan;

switch (pilihan);
    {
        case 1:
            input();
            cout << "hasil penjumlahan = " << penjumlahan(bilsatu, bildua) << endl;
            break;
         case 2:
            input();
            cout << "hasil pembagian = " << pembagian(bilsatu, bildua) << endl;
            break;
        case 3:
            input();
            cout << "hasil perkalian = " << perkalian(bilsatu, bildua) << endl;
            break;
        case 4:
            input();
            cout << "hasil pengurangan = " << pengurangan(bilsatu, bildua) << endl;
            break;
        case 5:
            break;
            