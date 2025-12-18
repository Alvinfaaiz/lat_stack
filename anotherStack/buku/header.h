#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

struct buku{
    string judul;
    int halaman;
    string penulis;
};

typedef struct elmList *address;

struct elmList{
    buku info;
    address next;
};

struct Stack{
    address top;
};

void createStack(Stack &S);
address alokasi(string judul, int halaman, string penulis);
void push(Stack &S, address p);
void pop(Stack &S);
void show(Stack S);


#endif // HEADER_H_INCLUDED
