#include<iostream>
#include<math.h>
using namespace std;

#define pi 3.14

class Circle{
    private:
        int radius;
    public:

    void getRadius(int r){
        this->radius=r;
    }
    void area(){
        int area = 4* pi * pow(radius,2);
        cout<<"The area is: "<<area<<endl;
    }
    void circumtance(){
        int circum= 2 * pi *radius;
        cout<<"The circumtance is: "<<circum<<endl;
    }
};

int main(){

    Circle cir;
    cir.getRadius(10);
    cir.area();
    cir.circumtance();
    
    return 0;
}