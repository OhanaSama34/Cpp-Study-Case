#include <iostream>
#include<math.h>

using namespace std;

float a, b, Hasil;
char op, ulang;

float Tambah(float a, float b);
float Kurang(float a, float b);
float Kali(float a, float b);
float Bagi(float a, float b);
float Pangkat(float a, float b);
double Faktorial(double a);

int main()
{
    do {
        cout<<"|-------------------------------|"<<endl;
        cout<<"|      Kalkulator Sederhana     |"<<endl;
        cout<<"|           + - * / ^ !         |"<<endl;
        cout<<"|-------------------------------|"<<endl;
        cout<<"Pilih Operasi yang di ingin kan :";cin>>op;

        switch(op){
        case '+':
            cout<< "Masukkan Angka A dan B"<< endl;
            cin>>a>>b;
            Hasil = Tambah(a, b);
            cout<<a<<"+"<< b << "="<< Hasil<<endl;
            break;
        case '-':
            cout<< "Masukkan Angka A dan B"<< endl;
            cin>>a>>b;
            Hasil = Kurang(a, b);
            cout<<a<<"-"<< b << "="<< Hasil<<endl;
            break;
        case '*':
            cout<< "Masukkan Angka A dan B"<< endl;
            cin>>a>>b;
            Hasil = Kali(a, b);
            cout<<a<<"*"<< b << "="<< Hasil<<endl;
            break;
        case '/':
            cout<< "Masukkan Angka A dan B"<< endl;
            cin>>a>>b;
            Hasil = Bagi(a, b);
            cout<<a<<"/"<< b << "="<< Hasil<<endl;
            break;
        case '^':
            cout<< "Masukkan Angka A dan B"<< endl;
            cin>>a>>b;
            Hasil = pow(a, b);
            cout<<a<<"^"<< b << "="<< Hasil<<endl;
            break;
        case '!':
            cout<< "Masukkan Angka A"<< endl;
            cin>>a;
            Hasil = Faktorial(a);
            cout<<a<<"!"<<"="<< Hasil<<endl;
            break;
        default :
             cout << "pilihan anda tidak ada pada sistem" << endl;
        }
        cout << "kembali ke menu (y/n) :";cin>>ulang;
    }
    while (ulang=='y'||ulang=='Y');
}

// Function Perhitungan
float Tambah(float a, float b){
    return  a + b;
}
float Kurang(float a, float b){
    return a - b;
}
float Kali(float a, float b){
    return a * b;
}
float Bagi(float a, float b){
    return a / b;
}
float Pangkat(float a, float b){
    return pow(a,b);
}
double Faktorial(double a){
    double fact = 1;
    for (int i = 2; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

