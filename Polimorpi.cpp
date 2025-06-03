#include <iostream>
using namespace std;

class seseorang{
    public:
    //virtual void pesan() = 0;
    virtual void pesan(){
        cout<<"Pesan dari seseorang"<<endl;
    }

};

class Bahar :public seseorang {
    public:
    void pesan(){
        cout<<"Pesan dari Bahar"<<endl;
    }
};

class Admaja :public seseorang {
    public:
    void pesan(){
        cout<<"Pesan dari Admaja"<<endl;
    }
};

int main(){
    seseorang* obyek;
    Bahar a;
    Admaja b;


obyek = &a;
obyek->pesan();
obyek = &b;
obyek->pesan();
//a.seseorang::pesan();
//b.seseorang::pesan();


return 0;
}