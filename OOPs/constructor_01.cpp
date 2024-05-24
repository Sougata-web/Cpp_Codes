#include<iostream>
using namespace std;

class student{
    int rno;
    char name[50];
    double fee;

    public:
        student(){
            cout<<"Enter the roll no: ";
            cin>>rno;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the fee: ";
            cin>>fee;
        }

        void display(){
            cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
        }
};

int main(){

     student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
    
    return 0;
}