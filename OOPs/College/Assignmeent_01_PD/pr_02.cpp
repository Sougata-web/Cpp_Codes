#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age; 
    string country;

    public:
    void setter(string name, int age, string country){

        this->age=age;
        this->country=country;
        this->name=name;

    }

    void getter(){
        cout<<"Name of the person is: "<<name<<endl;
        cout<<"Age of the person is: "<<age<<endl;
        cout<<"Country of the person is: "<<country<<endl;
    }

};

int main(){

    Person ps1;
    ps1.setter("Sougata", 19, "India");
    ps1.getter();
    
    return 0;
}