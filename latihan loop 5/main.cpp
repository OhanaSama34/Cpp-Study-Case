#include <iostream>

using namespace std;

int main() {
    int tinggi;
    char simbol;
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;
    cout << "Masukkan simbol piramida: ";
    cin >> simbol;

    for (int i = 1; i <= tinggi; i++) {

        // Membuat bintang untuk piramida
        for (int k = 1; k <= 1 * i ; k++) {
            cout << simbol;
        }

        // Pindah ke baris berikutnya
        std::cout << std::endl;
    }

    return 0;
}
