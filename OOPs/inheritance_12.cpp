#include<iostream>
using namespace std;
class Base{
    private:
        int pvt=1;
    protected:
        int prot=12;
    public:
        int pub=10;

    int getPVT(){return pvt;}
};

class publicDerived:public Base{
    public:
    int getProt(){return prot;}
};

int main(){
    publicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    
    return 0;
}