//day 2 belajar c++
//belajar operator aritmatika pada c++
//16/05/2026-sabtu

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "\nmasukkan angka pertama: ";
    cin >> a;
    cout << "\nmasukan angka kedua: ";
    cin >> b;

    cout << "\n---------HASIL----------\n";
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " x " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << (float)a / b << endl;   //(float)a/b = namanya [casting] yakni merubah int jadi float agar hasil desimal
    cout << a << " % " << b << " = " << a % b << endl;          //% = modulus atau sisa dari suatu hasil pembagian cth: 10 % 3 = 1

}