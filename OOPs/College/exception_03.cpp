// C++ program to demonstate property 3: If an exception is
// thrown and not caught anywhere, the program terminates
// abnormally in exception handling.

#include <iostream>
using namespace std;


void fun(int *ptr,int n) {
    if(ptr==NULL){
        throw ptr;
    }
    if(n==0){
        throw n;
    }
}

int main()
{
	try {
		fun(NULL,0);
	}
	catch (...) {
		cout << "Caught exception from fun()";
	}
	return 0;
}
