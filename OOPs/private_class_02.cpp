#include<iostream>
using namespace std;

class Circle{

    private: 
        double radius;
    public:
        void compute_area(double r){
            radius=r;
            cout<<"The radius is: "<<radius<<endl;
            cout<<"The area is : "<<3.14*radius*radius; 
        }
};

int main(){

    Circle obj;

    obj.compute_area(5.5);
    
    return 0;
}