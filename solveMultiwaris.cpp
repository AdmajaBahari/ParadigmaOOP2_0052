#include <iostream>
using namespace std;

class orang {
    public:
    int umur;

    orang(int pUmur) : umur (pUmur)
    {
        cout<<"Orang dibuat dengan umur"<< umur <<"\n"<<endl;
    }
};

class pekerja : public orang {
public:
    pekerja(int pUmur) : orang(pUmur) {
        cout << "pekerja dibuat\n" << endl;
    }
};



class pelajar : public orang {
    public:
    pelajar(int pUmur) : orang(pUmur)
    {
        cout <<"pelajar dibuat\n"<<endl;
    }
};

class budi : public pekerja, public pelajar {
public:
    budi(int pUmur) :
        orang(pUmur),       // constructor virtual base class
        pekerja(pUmur),     // constructor parent
        pelajar(pUmur)      // constructor parent     // hal ini dapat dilakukan jika menggunakan virtual
    {
        cout << "Budi dibuat\n" << endl;
    }
};

int main(){
    budi a(12);

    return 0;
}
