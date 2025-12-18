#include "header.h"
#include <iostream>

using namespace std;

int main()
{
    address p;
    Stack S;
    createStack(S);

    string judul, penulis;
    int halaman, i;

    for(i = 0; i < 10; i++){
        cout << "masukkan identitas buku: " << endl;
        cout << "Masukkan judul buku: ";
        cin >> judul;
        cout << "Masukkan jumlah halaman: ";
        cin >> halaman;
        cout << "Masukkan nama penulis: ";
        cin >> penulis;

        p = alokasi(judul, halaman, penulis);
        push(S, p);
    }

    show(S);
    cout << endl;
    cout << endl;

    pop(S);
    show(S);

    cout << "Hello world!" << endl;
    return 0;
}
