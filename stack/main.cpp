#include "header.h"
#include <iostream>

using namespace std;

int main()
{
    Stack S;
    createStack(S);

    string nama, nim;
    int usia;
    address p;

    int i = 0;

    while(i < 10){
        cout << "Tumpukan ke " << i+1 << ":" << endl;
        cout << "Masukkan nama :";
        cin >> nama;
        cout << "Masukkan NIM :";
        cin >> nim;
        cout << "Masukkan usia :";
        cin >> usia;
        cout << endl;

        p = alokasi(nama, nim, usia);
        push(S, p);
        i++;
    }

    show(S);
    cout << endl;

    cout << "Hasil setelah melaukan pop: ";
    pop(S, p);
    show(S);

    cout << "Hello world!" << endl;
    return 0;
}
