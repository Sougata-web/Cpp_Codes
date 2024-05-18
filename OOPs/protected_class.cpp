#include<iostream>
using namespace std;

class Parent{
    protected:
        int id_protrcted;
};

class Child: public Parent{
    public: 
        void setId(int id){
            id_protrcted=id;    
        }
        void display(){
            cout<<"The protected id is: "<<id_protrcted;
        }
};

int main(){

    Child p1;
    p1.setId(10);

    p1.display();
    
    return 0;
}