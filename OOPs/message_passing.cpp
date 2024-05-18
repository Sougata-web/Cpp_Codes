#include<iostream>
using namespace std;

class myCar{
    public:
        void displaySpeed(int speed){
            cout<<"Your car is running at "<<speed<<" km/h."<<endl;
        }
};

int main(){

    myCar car1;
    int currentSpeed=100;
    car1.displaySpeed(currentSpeed);
    
    return 0;
}