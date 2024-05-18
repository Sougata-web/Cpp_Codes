#include<iostream>
using namespace std;

class Geeks{
    public:
    int id;
        Geeks(){
            cout<<"Default constructor called"<<endl;
            id=-1;
        }
        Geeks(int x){
            cout<<"Parameterized constructor called."<<endl;
            id=x;
        }
};

int main(){
    Geeks g1;
    cout<<"Object id is: "<<g1.id<<endl;
    Geeks g2(10);
    cout<<"Object id is: "<<g2.id<<endl;
    return 0;
}