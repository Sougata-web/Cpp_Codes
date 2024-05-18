#include<iostream>
using namespace std;
class Circle{
    public:
        double radius;
        double compute_area(){
            return 3.14*radius*radius;
        }
};

int main(){

    Circle obj;
    obj.radius=5.5;



    cout<<"The radius is: "<<obj.radius<<endl;
    cout<<"The area of the circle is: "<<obj.compute_area();
    
    return 0;
}