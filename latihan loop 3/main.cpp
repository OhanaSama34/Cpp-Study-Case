#include <iostream>

using namespace std;

int main()
{

    int a, b, result = 0;
    cout << "-----------------------------"<< endl;
    cout<< "Masukkan Nilai A :"; cin>>a;
    cout<< "Masukkan Nilai B :"; cin>>b;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    cout << "Hasil perkalian dari a dan b adalah : " << result << endl;
}
