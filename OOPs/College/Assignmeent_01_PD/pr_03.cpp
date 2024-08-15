#include<iostream>
using namespace std;
class  Triangle{
    private:
        int side1,side2,side3;

    public:

        void setter(){
            cout<<"Enter the side 1: ";
            cin>>side1;
            cout<<"Enter the side 2: ";
            cin>>side2;
            cout<<"Enter the side 3: ";
            cin>>side3;

            this->side1=side1;
            this->side2=side2;
            this->side3=side3;
        }

        void get_the_triangle(){
            if((side1==side2 )&&(side2 == side3)){
                cout<<"This is a equilateral triangle: "<<endl;
            }

            else if((side1 == side2)|| (side2== side3)||(side1 == side3)){
                cout<<"Isosceles Triangle"<<endl;
            }else{
                cout<<"Scalene Triangle"<<endl;
            }
        }
};

int main(){

    Triangle tri;
    tri.setter();
    tri.get_the_triangle();
    
    return 0;
}