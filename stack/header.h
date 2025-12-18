#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    int usia;
};
typedef struct elmList *address;

struct elmList{
    mahasiswa info;
    address next;
};

struct Stack{
    address top;
};

void createStack(Stack &S);
address alokasi(string nama, string nim, int usia);
void push(Stack &S, address p);
void pop(Stack &S, address &p);
void show(Stack S);


#endif // HEADER_H_INCLUDED
