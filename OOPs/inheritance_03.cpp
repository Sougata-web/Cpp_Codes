// C++ program to explain 
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{   
    // Creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}
