#include <iostream>
#include "SLL.h"
using namespace std;

int main() {
    list L;
    int jumlahData;
    string bulanCari;
    createList_103012400211(L);

    cout << "Masukkan jumlah data panen yang akan diinput: ";
    cin >> jumlahData;

    for (int i = 0; i < jumlahData; i++) {
        infotype p = new tPanen;

        cout << "\nData Panen ke-" << (i + 1) << ":\n";
        cout << "Nama Tanaman: ";
        cin >> p->namaTanaman;

        cout << "Bulan Panen: ";
        cin >> p->bulanPanen;

        cout << "Jumlah Panen (kg): ";
        cin >> p->jumlahPanen;

        tambahData_103012400211(L, p);
        cout << "-> Data berhasil ditambahkan!\n";
    }

    tampilkanList_103012400211(L);

    address maxPanen = panenTerbanyak_103012400211(L);
    if (maxPanen != nullptr) {
        cout << "Hasil panen terbanyak:\n";
        cout << "- Tanaman : " << maxPanen->info->namaTanaman << "\n";
        cout << "- Bulan   : " << maxPanen->info->bulanPanen << "\n";
        cout << "- Jumlah  : " << maxPanen->info->jumlahPanen << " kg\n";
    } else {
        cout << "List kosong, tidak ada data panen.\n";
    }

    cout << "Masukkan bulan yang ingin dicari: ";
    cin >> bulanCari;

    cout << "Panen bulan " << bulanCari << ": ";
    panenBulanan_103012400211(L, bulanCari);
    cout << "\n";

    return 0;
}
