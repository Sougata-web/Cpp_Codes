#include<iostream>
using namespace std;

class Sample{
    private:
    int age;
    public:
    void displayAge(int a){
        age=a;
        cout<<"Age: "<<age<<endl;

    }
};

int main(){

    int ageInput;
    Sample obj1;
    cout<<"Enter your age: "<<endl;
    cin>>ageInput;

    obj1.displayAge(ageInput);
    
    
    return 0;
}