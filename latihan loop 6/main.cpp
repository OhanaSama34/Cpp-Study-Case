#include <iostream>

using namespace std;

int main()
{
    int n, f;
    std::cout << "Masukkan jumlah angka: ";
    std::cin >> n;

    int angka = 1; // Angka awal

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++){
            cout << angka << " ";
            angka++;
            if(f>n){
                break;
            }
        }

        f++;

        // Pindah ke baris berikutnya
        std::cout << std::endl;

    }

    return 0;
}
