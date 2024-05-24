#include<iostream>
using namespace std;

class GFG{
    private:
        int data;
    public:
        GFG(int x=0){data=x;}
        int getData(){return data;}
};

int main(){

    GFG obj1;
    GFG obj2(10);

    cout<<"obj1: "<<obj1.getData()<<endl;
    cout<<"obj2: "<<obj2.getData()<<endl;
    
    return 0;
}