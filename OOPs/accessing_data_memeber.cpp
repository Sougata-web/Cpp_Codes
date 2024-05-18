#include<iostream>
using namespace std;


class geekName{
    public:
        string geekname;

        void printName(){
            cout<<"Your name is: "<<geekname<<endl;
        }
};

int main(){
    geekName gk1;
    gk1.geekname="Sougata Pal";
    gk1.printName();
    return 0;
}