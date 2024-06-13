#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){ cout<<"\n This is a vehicle. "<<endl;}
};

class FourWheeler{
    public:
        FourWheeler(){cout<<"\n This is a four wheeler. "<<endl;}
};

class Car: public Vehicle,public FourWheeler{};

int main(){
    Car c1;
    
    return 0;
}