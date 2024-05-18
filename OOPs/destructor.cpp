#include<iostream>
using namespace std;

class Geeks{
    public:
        int id;

        ~Geeks(){
            cout<<"Called Destructor is: "<<id<<endl;
        }
};

int main(){

    Geeks obj1;
    obj1.id=7;
    int i=0;
    while(i<=5){
        Geeks obj2;
        obj2.id=i;
        i++;
    }
    
    return 0;
}