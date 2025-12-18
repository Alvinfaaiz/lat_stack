#include "header.h"
#include <iostream>

using namespace std;

void createStack(Stack &S){
    S.top = nullptr;
}

address alokasi(string judul, int halaman, string penulis){
    address p = new elmList;

    p->info.judul = judul;
    p->info.halaman = halaman;
    p->info.penulis = penulis;

    return p;
}

void push(Stack &S, address p){
    p->next = S.top;
    S.top = p;
}

void pop(Stack &S){
    address hapus;

    hapus = S.top;
    S.top = hapus->next;
    hapus->next = nullptr;
}

void show(Stack S){
    address p = S.top;

    while(p != nullptr){
        cout << p->info.judul << endl;
        cout << p->info.halaman << endl;
        cout << p->info.penulis << endl;
        cout << endl;

        p = p->next;
    }
}
