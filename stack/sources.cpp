#include "header.h"
#include <iostream>

using namespace std;

void createStack(Stack &S){
    S.top = nullptr;
}

address alokasi(string nama, string nim, int usia){
    address p = new elmList;

    p->info.nama = nama;
    p->info.nim = nim;
    p->info.usia = usia;
    p->next = nullptr;

    return p;
}

void push(Stack &S, address p){
    p->next = S.top;
    S.top = p;
}

void pop(Stack &S, address &p){
    address hapus;

    hapus = S.top;
    S.top = hapus->next;
    hapus->next = nullptr;
}

void show(Stack S){
    address p = S.top;

    while(p != nullptr){
        cout << "Data mahasiswa: " << endl;
        cout << "Nama   : " << p->info.nama << endl;
        cout << "NIM    : " << p->info.nim << endl;
        cout << "Usia   : " << p->info.usia << endl;
        cout << endl;
        p = p-> next;
    }
}

