// // C++ program to access static data
// // member with explicit definition
// #include <iostream>
// using namespace std;

// class A {
// 	int x;

// public:
// 	A() 
// 	{ 
// 	cout << "A's constructor called " << 
// 			endl; 
// 	}
// };

// class B {
// 	static A a;

// public:
// 	B() 
// 	{ 
// 	cout << "B's constructor called " << 
// 			endl; 
// 	}
// 	static A getA() 
// 	{ 
// 	return a; 
// 	}
// };

// // Definition of a
// A B::a; 

// // Driver code
// int main()
// {
// B b1, b2, b3;
// A a = b1.getA();

// return 0;
// }


// C++ Program to demonstrate 
// static members can be accessed 
// without any object
#include <iostream>
using namespace std;

class A {
	int x;

public:
	A() 
	{ 
	cout << "A's constructor called " << 
			endl; 
	}
};

class B {
	static A a;

public:
	B() 
	{ 
	cout << "B's constructor called " << 
			endl;
	}
	static A getA() 
	{ 
	return a; 
	}
};

// Definition of a
A B::a; 

// Driver code
int main()
{
// static member 'a' is accessed 
// without any object of B
A a = B::getA();

return 0;
}
