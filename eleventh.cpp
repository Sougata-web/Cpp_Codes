#include<iostream>
using namespace std;

int main(){
    // const size_t COUNT{100};

    // for(size_t i{0} ; i < COUNT ; ++i){
    //     std::cout << i << " : I love C++" << std::endl;
    // }
    // std::cout << "Loop done!" << std::endl;

    // for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
    //     std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    // }

    // int increment {5};
    // int number1 {10};
    // int number2 {20};
    // int number3 {25};
    // int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    // std::cout << "number1 : " << number1 << std::endl; // 60
    // std::cout << "number2 : " << number2 << std::endl; // 20
    // std::cout << "number3 : " << number3 << std::endl; // 33
    // std::cout << "result : " <<  result << std::endl; // 33
   


   
    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration
	
    
    // for(size_t i {0} ; i < 10 ; ++i){
    //     std::cout << "value : " << bag_of_values[i] << std::endl;
    // }
    
	

    
    // for (int value : bag_of_values){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }
    


   //Specify the collection in place
   
    // for (int value : {1,2,3,4,5,6,7,8,9,10}){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }

    //Auto type deduction
	// for (auto value : {1,2,3,4,5,6,7,8,9,10}){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }
   
    


    return 0;
}