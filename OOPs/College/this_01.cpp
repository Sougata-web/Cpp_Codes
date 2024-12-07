#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string name, int age) {
        this->name = name; // 'this' differentiates member variable from parameter
        this->age = age;
    }

    // Method using 'this' to return the current object
    Person& setName(string name) {
        this->name = name;
        return *this; // Returning current object
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 25);
    p1.display();

    p1.setName("Bob").display(); // Method chaining using 'this'
    return 0;
}
