#include <iostream>
using namespace std;

int main()
{
    float celcius, fahrenheit, hasil;
    char pilih, ulang;

    do{
        cout << "Nama     : Noufal Radhitya" << endl;
        cout << "NIM      : 2304140007" << endl;
        cout << "Kelompok : VIM (Vi IMprove)" << endl;
        cout << "Prodi    : Sistem Informasi'23\n\n" << endl;
        cout << "===Program Konversi Suhu Celcius dan Fahrenheit===\n" << endl;
        cout << "1. Celcius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celcius" << endl;
        cout << "Pilih (1,2) : ";cin>>pilih;
        cout << "====================================================\n\n" << endl;
        switch(pilih){

        case '1' :
            cout << "---Celcius to Fahrenheit---" << endl;
            cout << "input suhu (Celcius) :"; cin>>celcius;
            hasil = 9 * celcius / 5 + 32;
            cout << "hasil perhitungan (Fahrenheit) :" << hasil << endl;
            break;
        case '2' :
            cout << "---Fahrenheit to Celcius---" << endl;
            cout << "input suhu (Fahrenheit) :"; cin>>fahrenheit;
            hasil = (fahrenheit-32) / 1.8;
            cout << "hasil perhitungan (Celcius) :" << hasil << endl;
            break;
        default :
            cout << "pilihan anda tidak ada pada sistem" << endl;

        }
        cout << "kembali ke menu (y/n) :";cin>>ulang;

    }
    while (ulang=='y'||ulang=='Y');
}
