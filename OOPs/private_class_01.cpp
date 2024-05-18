#include<iostream>
using namespace std;

class Circle{
	private:
		double radius;
	public:
		double calculate_area(){
			return 3.14*radius*radius;
		}
};

int main(){
	Circle cr1;

	// cr1.radius=5.5;//private data

	cout<<"The calculated area is: "<<cr1.calculate_area()<<endl; 
	
	return 0;
}