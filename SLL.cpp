#include <iostream>
#include "SLL.h"
using namespace std;

void createList_103012400211(list &L){
    L.first = nullptr;
}

address createNewElm_103012400211(infotype x){
    address P = new elmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void tambahData_103012400211(list &L, infotype dataPanen){
    address P = createNewElm_103012400211(dataPanen);
    P->next = L.first;
    L.first = P;
}

address panenTerbanyak_103012400211(list L){
    if (L.first == nullptr) {
        return nullptr;
    }

    address P = L.first;
    address maxElm = P;
    int maxJumlah = P->info->jumlahPanen;
    P = P->next;
    while (P != nullptr) {
        if (P->info->jumlahPanen > maxJumlah) {
            maxJumlah = P->info->jumlahPanen;
            maxElm = P;
        }
        P = P->next;
    }

    return maxElm;
}

void panenBulanan_103012400211(list L, string bulan){
    address P = L.first;
    while (P != nullptr) {
        if (P->info->bulanPanen == bulan) {
            cout << P->info->namaTanaman << " ";
        }
        P = P->next;
    }
}

void tampilkanList_103012400211(list L){
    address P = L.first;
    cout << "\n============================================\n";
    cout << "          DAFTAR HASIL PANEN\n";
    cout << "============================================\n";

    if (P == nullptr) {
        cout << "List kosong.\n";
    } else {
        int no = 1;
        while (P != nullptr) {
            cout << no << ". Tanaman    : " << P->info->namaTanaman << "\n";  // ← pakai ->
            cout << "   Bulan      : " << P->info->bulanPanen << "\n";        // ← pakai ->
            cout << "   Jumlah     : " << P->info->jumlahPanen << " kg\n";    // ← pakai ->
            cout << "--------------------------------------------\n";
            P = P->next;
            no++;
        }
    }
}
