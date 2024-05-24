#include<iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int x1,int y1){
            x=x1;
            y=y1;
        }

        int getx(){return x;}
        int gety(){return y;}
};

int main(){
    Point p1(10,20);
    cout<<p1.getx()<<endl;
    cout<<p1.gety()<<endl;
    
    return 0;
}