#include<iostream>
using namespace std;

class Parent{
    public:
    void GeeksForGeeks(){
        cout<<"Base funtion."<<endl;
    }
};

class Child:public Parent{
    public:
    void GeeksForGeeks(){
        cout<<"Derived Function."<<endl;

        Parent::GeeksForGeeks();
    }
};


int main(){
    Child Child_derived;
    Child_derived.GeeksForGeeks();
    
    return 0;
}