#include<iostream>
using namespace std;

enum roll_no{
     satya = 70,
    aakanskah = 73,
    sanket = 31,
    aniket = 05,
    avinash = 68,
    shreya = 47,
    nikita = 69,
};

int main(){

    enum roll_no obj;
    obj=nikita;
    cout<<"The roll no of Nikita is: "<<obj;
    
    return 0;
}