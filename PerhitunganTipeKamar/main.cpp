#include <iostream>
#include <string>

using namespace std;

int main() {
    string bulan, ulang;
    float Apartment, Studio;
    int Hari;

    do {
        cout<< "Masukkan Bulan Apa Kamu Akan Menginap :";
        cin >> bulan;
        cout<< "Masukkan Berapa Hari Kamu Akan Menginap :";
        cin>> Hari;
        if (bulan == "Mei" || bulan == "mei" || bulan == "Oktober" || bulan == "oktober") {
            if (Hari > 14) {
                Studio = 50 * Hari -(50 * Hari * 0.3);
            } else if (Hari > 7) {
                Studio = 50 * Hari - (50 * Hari * 0.05);
            } else {
                Studio = 50 * Hari;
            }
            if (Hari > 14) {
                Apartment = 65 * Hari - (65 * Hari * 0.1);
            } else {
                Apartment = 65 * Hari;
            }
        } else if (bulan == "Juni" || bulan == "juni" || bulan == "September" || bulan == "september") {
            if (Hari > 14){
                Studio = 75.20 * Hari - (75.20 * Hari * 0.2);
                Apartment = 68.70 * Hari - (68.70 * Hari * 0.1);
            } else {
                Studio = 75.20 * Hari;
                Apartment = 68.70 * Hari;
            }
        } else if (bulan == "Juli" || bulan == "juli" || bulan == "Agustus" || bulan == "agustus") {
            if (Hari > 14){
                Studio = 76 * Hari;
                Apartment = 77 * Hari - (77 * Hari * 0.1);
            } else {
                Studio = 76 * Hari;
                Apartment = 77 * Hari;
            }
        }
        cout<< "================================"<<endl;
        cout<< "Harga Kamar"<<endl;
        cout<< "Studio : "<< Studio<< "USD"<<endl;
        cout<< "Apartment : "<< Apartment<< "USD"<<endl;
        cout << "kembali ke menu (y/n) :";cin>>ulang;
    }
    while (ulang == "y"|| ulang == "Y");
}

