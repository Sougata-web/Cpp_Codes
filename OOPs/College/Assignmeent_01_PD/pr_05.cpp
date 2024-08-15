#include <iostream>
#include <cstring>

class ShallowCopy {
public:
    char* data;

    // Constructor
    ShallowCopy(const char* str) {
        data = const_cast<char*>(str);
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopy(const ShallowCopy& other) {
        data = other.data;
    }

    void display() const {
        std::cout << "ShallowCopy data: " << data << std::endl;
    }
};

class DeepCopy {
public:
    char* data;

    // Constructor
    DeepCopy(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Copy Constructor (Deep Copy)
    DeepCopy(const DeepCopy& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

     void display() const {
        std::cout << "DeepCopy data: " << data << std::endl;
    }

    
    // Destructor to free the allocated memory
    ~DeepCopy() {
        delete[] data;
    }

   
};

void demonstrateLocalClass() {
    // Local class within the function
    class LocalClass {
    public:
        void showMessage() const {
            std::cout << "This is a local class inside demonstrateLocalClass()" << std::endl;
        }
    };

    LocalClass localObj;
    localObj.showMessage();
}

int main() {
    // Demonstrate Local Class
    demonstrateLocalClass();

    // Demonstrate Shallow Copy
    ShallowCopy shallow1("Hello");
    ShallowCopy shallow2 = shallow1; // Shallow copy

    shallow1.display();
    shallow2.display();

    // Modify original data to demonstrate the problem with shallow copy
    shallow1.data[0] = 'h';
    shallow1.display();
    shallow2.display(); // Both shallow1 and shallow2 are affected

    // Demonstrate Deep Copy
    DeepCopy deep1("World");
    DeepCopy deep2 = deep1; // Deep copy

    deep1.display();
    deep2.display();

    // Modify original data to demonstrate deep copy works correctly
    deep1.data[0] = 'w';
    deep1.display();
    deep2.display(); // Only deep1 is affected, deep2 remains unchanged

    return 0;
}
