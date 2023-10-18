#include <iostream>
using namespace std;

int main() {
    int N;
    double nilai;
    int baikSekali = 0, baik = 0, kurang = 0;
    double totalNilai = 0.0;

    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Masukkan nilai siswa ke-" << i << ": ";
        cin >> nilai;
        totalNilai += nilai;

        if (nilai >= 8 && nilai <= 10) {
            baikSekali++;
        }
        else if (nilai >= 6.5 && nilai <= 8) {
            baik++;
        }
        else if (nilai < 6.5) {
            kurang++;
        }
    }

    double persentaseBaikSekali = (static_cast<double>(baikSekali) / N) * 100;
    double persentaseBaik = (static_cast<double>(baik) / N) * 100;
    double persentaseKurang = (static_cast<double>(kurang) / N) * 100;
    double rataRataNilai = totalNilai / N;

    cout << "Hasil pengelompokan berdasarkan nilai: " << endl;
    cout << "Baik Sekali: " << persentaseBaikSekali << "%" << endl;
    cout << "Baik: " << persentaseBaik << "%" << endl;
    cout << "Kurang: " << persentaseKurang << "%" << endl;
    cout << "Rata-rata nilai: " << rataRataNilai << endl;

    return 0;
}
