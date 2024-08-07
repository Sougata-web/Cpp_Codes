#include<iostream>
using namespace std;

class Sample{
    private:
    int x;
    public:
    Sample(int n){
        x=n;
        cout<<"Constructor called for  object with the value: "<<x<<endl;
    }
    ~Sample(){
        cout<<"Destructor called for  object with the value: "<<x<<endl;
    }
};

int main(){
    Sample s1(10);
    Sample s2(20);
    Sample s3(30);
    
    return 0;
}