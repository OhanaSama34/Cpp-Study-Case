#include <iostream>

using namespace std;

int main()
{
    int makanan, minuman;
    float NasiGoreng, SopBuntut, DoriSmbMatah, KiwiMojito, LemonTea, JusJeruk, Harga, HargaMKN, HargaMIN, Total, Pajak = 0.11;
    char ulang;

    do {
        cout<<"============================="<<endl;
        cout<<"Pilihan Makanan"<<endl;
        cout<<"1. Nasi Goreng"<<endl;
        cout<<"2. Sop Buntut"<<endl;
        cout<<"3. Dori Sambal Matah"<<endl;
        cout<<"============================="<<endl;
        cout<<"Pilihan Minuman"<<endl;
        cout<<"1. Kiwi Mojito"<<endl;
        cout<<"2. Lemon Tea"<<endl;
        cout<<"3. Jus Jeruk/n"<<endl;
        cout<<"Pilih Jenis Makanan (KODE) : "; cin>>makanan;
        cout<<"Pilih Jenis Minuman (KODE) : "; cin>>minuman;
        cout<<"\n"<<endl;

        if (makanan == 1) {
            NasiGoreng =20;
            HargaMKN = NasiGoreng;
        } else if (makanan == 2) {
            SopBuntut=45;
            HargaMKN = SopBuntut;
        } else if (makanan == 3){
            DoriSmbMatah=25;
            HargaMKN = DoriSmbMatah;
        } else {
            cout<<"Pilihan Tidak Ada Pada Menu"<<endl;
            break;
        }

        if (minuman == 1) {
            KiwiMojito=25;
            HargaMIN = KiwiMojito;
        } else if (minuman == 2) {
            LemonTea=15;
            HargaMIN = LemonTea;
        } else if (minuman == 3){
            JusJeruk=18;
            HargaMIN = JusJeruk;
        } else {
            cout<<"Pilihan Tidak Ada Pada Menu"<<endl;
            break;
        }

        Harga = HargaMKN + HargaMIN;
        Total = Harga + (Harga * Pajak);

        cout<<"============================="<<endl;
        cout<<"Total : " << Harga<<endl;
        cout<<"PPN 11% : " << Total << endl;

        cout << "kembali ke menu (y/n) :";cin>>ulang;
    }
    while (ulang=='y'||ulang=='Y');
}
