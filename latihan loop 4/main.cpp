#include <iostream>

using namespace std;


int main() {
    int a, b;
    cout << "Masukkan dua angka (a): ";
    cin >> a;
    cout << "Masukkan dua angka (b): ";
    cin >> b;

    if (a <= 1 || b < 1 || a > 9 || b > 100 || a > b) {
        cout << "Input tidak valid. a harus lebih dari atau sama dengan 1, b harus lebih dari atau sama dengan 4, a dan b harus kurang dari atau sama dengan 9, dan a harus kurang dari atau sama dengan b." << std::endl;
        return 1;
    }

    for (int i = a; i <= b - 3; i++) {
        for (int j = i + 1; j <= b - 2; j++) {
            for (int k = j + 1; k <= b - 1; k++) {
                for (int l = k + 1; l <= b; l++) {
                    cout << i << " " << j << " " << k << " " << l << endl;
                }
            }
        }
    }

    return 0;
}
