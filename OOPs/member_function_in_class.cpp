#include<iostream>
using namespace std;

class Geeks{
    public:
        string geekname;
        int id;
        void printName();

        void printId(){
            cout<<"Your id is: "<<id;
        }
};

void Geeks::printName(){
    cout<<"Your name is: "<<geekname<<endl;
}

int main(){
    Geeks gk1;
    gk1.geekname="Sougata Pal";
    gk1.id=1;
    gk1.printName();
    gk1.printId();
    
    return 0;
}