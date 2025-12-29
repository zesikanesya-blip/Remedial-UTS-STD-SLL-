#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>

using namespace std;

struct tPanen {
    string namaTanaman;
    string bulanPanen;
    int jumlahPanen;
};

typedef struct tPanen *infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList_103012400211(list &L);
address createNewElm_103012400211(infotype x);
void tambahData_103012400211(list &L, infotype dataPanen);
address panenTerbanyak_103012400211(list L);
void panenBulanan_103012400211(list L, string bulan);
void tampilkanList_103012400211(list L);

#endif // SLL_H_INCLUDED
