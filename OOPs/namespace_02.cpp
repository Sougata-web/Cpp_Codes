// A C++ program to show more than one namespaces 
// with different names.
#include <iostream>
using namespace std;

// first name space
namespace first
{
int func() { return 5; }
}

// second name space
namespace second
{
int func() { return 10; }
}

int main()
{
// member function of namespace
// accessed using scope resolution operator
cout << first::func() <<"\n";	 
cout << second::func() <<"\n"; 
return 0;
}
