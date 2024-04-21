#include<iostream>
using namespace std;

int main(){
    //    int* p_number {}; // Will initialize with nullptr
    // double*  p_fractional_number{};
    // int* p_number1{nullptr};
    // int* p_fractional_number1{nullptr};

    // std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4
    // std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    // std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    // std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    // std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    // std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    // int int_var {43};
    // int *p_int{&int_var};

    // std::cout << "Int var : " << int_var << std::endl;
    // std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // int int_var1 {65};
    // p_int = &int_var1; // Assign a different address to the pointer
    // std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // const char * message {"Helllo World"};

    // cout<<"Message: "<<message<<endl;

    // std::cout << "*message : " << *message << std::endl;

    // char message1[] {"Hello World!"};
    // message1[0] = 'B';
    // std::cout << "message1 : " << message1 << std::endl;


    // const char * predictions []  {
    //     "a lot of kids running in the backyard!",
    //     "a lot of empty beer bootles on your work table.",
    //     "you Partying too much with kids wearing weird clothes.",
    //     "you running away from something really scary",
    //     "clouds gathering in the sky and an army standing ready for war",
    //     "dogs running around in a deserted empty city",
    //     "a lot of cars stuck in a terrible traffic jam",
    //     "you sitting in the dark typing lots of lines of code on your dirty computer",
    //     "you yelling at your boss. And oh no! You get fired!",
    //     "you laughing your lungs out. I've never seen this before." 
    // };

    // bool end{ false };

    // const int  max_length{ 15 };
    // char name[max_length]{};

    // std::cout << "What's your name dear :" << std::endl;

    // std::cin.getline(name, max_length); // Get input with spaces

    // while (!end) {
    //     std::cout << "Oh dear " << name << ", I see ";

    //     size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

    //     std::cout << predictions[rand_num] << std::endl;



        
        // switch (rand_num) { // [0~10]
        // case 0:
        //     std::cout << prediction0 << std::endl;
        //     break;
        // case 1:
        //     std::cout << prediction1 << std::endl;
        //     break;

        // case 2:
        //     std::cout << prediction2 << std::endl;
        //     break;
        // case 3:
        //     std::cout << prediction3 << std::endl;
        //     break;
        // case 4:
        //     std::cout << prediction4 << std::endl;
        //     break;
        // case 5:
        //     std::cout << prediction5 << std::endl;
        //     break;
        // case 6:
        //     std::cout << prediction6 << std::endl;
        //     break;
        // case 7:
        //     std::cout << prediction7 << std::endl;
        //     break;

        // case 8:
        //     std::cout << prediction8 << std::endl;
        //     break;

        // case 9:
        //     std::cout << prediction9 << std::endl;
        //     break;
        // default:
        //     std::cout << ", huum, I don't see anything" << std::endl;
        // }
        

    //     std::cout << "Do you want me to try again ? (Y | N) : ";

    //     char go_on;
    //     std::cin >> go_on;

    //     end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    // }

    // std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    // std::cout << std::endl;
    // std::cout << "Raw variable that can be modified : " << std::endl;
	
    // int number {5};// Not constant, can change number any way we want
    // std::cout << "number : " << number << std::endl;
	// std::cout << "&number : " << &number << std::endl;
    // //Modify
    // number = 12;
    // number += 7;
    
    // //Access - Print out
    // std::cout << "number : " << number << std::endl;
	// std::cout << "&number : " << &number << std::endl;
    // std::cout << std::endl;

    // int *p_number1 {nullptr};
    // int  number1{23};
    
    // p_number1 = &number1;
    // std::cout << "Pointer and value pointed to : both modifiable : " << std::endl;
    // std::cout << "p_number1 :" << p_number1 << std::endl; // Address
    // std::cout << "*p_number1 : " << *p_number1 << std::endl; // 23
	// std::cout << "number1 : " << number1 << std::endl; // 23
    
    // //Change the pointed to value through pointer
	// std::cout << std::endl;
    // std::cout << "Modifying the value pointed to p_number1 through the pointer : " << std::endl;
    // *p_number1 = 432;
	// std::cout << "p_number1 : " << p_number1 << std::endl;
    // std::cout << "*p_number1  : " << *p_number1 << std::endl;
	// std::cout << "number1 : " << number1 << std::endl;

    // //Change the pointer itself to make it point somewhere else
	// std::cout << std::endl;
	// std::cout << "Changing the pointer itself to make it point somewhere else" << std::endl;
    // int number2 {56};
    // p_number1 = &number2;
    // std::cout << "p_number1 :" << p_number1 << std::endl;
    // std::cout << "*p_number1  : " << *p_number1 << std::endl;
	// std::cout << "number1 : " << number1 << std::endl;
	// std::cout << "number2 : " << number2 << std::endl;
    // std::cout << std::endl;


    // std::cout << "Pointer is modifiable , pointed to value is constant : " << std::endl;
	// int number3 {632}; // Although you can omit the const on number3 here and it is still 
    // // going to compile, it is advised to be as explicit as possible in
    // // your code and put the const in front. Make your intents CLEAR.
							 
    // const int* p_number3 {&number3}; // Can't modify number3 through p_number3
    
    // std::cout << "p_number3 :" << p_number3 << std::endl;
    // std::cout << "*p_number3 : " << *p_number3 << std::endl;
	
	// std::cout << std::endl;
    // std::cout << "Modifying the value pointed to by p_number3 through the pointer (Compile Error) : " << std::endl;
    // //*p_number3 = 444; // Compile error 
                      
    // //Although we can't change what's pointed to by p_number3,
	// //we can still change where it's pointing

	// std::cout << std::endl;
    // std::cout << "Changing the address pointed to by p_number3 : " << std::endl;
    // int number4 {872};
    // p_number3 = &number4;
    
    // std::cout << "p_number3 :" << p_number3 << std::endl;
    // std::cout << "*p_number3 : " << *p_number3 << std::endl;
    
    // std::cout << std::endl; 

    // std::cout << "const keyword applies to a variable name : " << std::endl;
	
	// int protected_var {10}; // Can make it const to protect it if we want.Show this
	
	// //p_protected_var is a pointer to const data, we can't
	// //modify the data through this pointer : regardless of
	// //whether the data itself is declared const or not.
	// const int* p_protected_var {&protected_var};
	
	// //*p_protected_var = 55;
	// protected_var = 66;
	// std::cout << "protected_var : " << protected_var << std::endl;
	// std::cout << "p_protected_var : " << p_protected_var << std::endl;
	// std::cout << "*p_protected_var : " << *p_protected_var << std::endl;
	// std::cout << std::endl;

	// //You can't set up a modifiable pointer to const data though,
	// //You'll get a compiler error :Invalid convertion from 'const type*' to 'type*'.
	// const int some_data{55};
	// //int * p_some_data {&some_data}; // Compiler error.
	// //*p_some_data = 66;

    // const int number5 {459};
    // const int* const p_number5 {&number5 };
    // std::cout << "Pointer is constant, value pointed to is constant : " << std::endl;
    // std::cout << "p_number5 :" << p_number5 << std::endl;
    // std::cout << "*p_number5 : " << *p_number5 << std::endl;
    
    // //Can't modify the pointed to value through the pointer
    // std::cout << "Changing value pointed to by p_number5 through the pointer (Compile Error) " << std::endl;
    // //*p_number5 = 222; // Error : Trying to assign to read only location
    
    // //Can't change where the pointer is pointing to : The pointer is now itself constant
    // std::cout << "Changing the pointer p_number5 address itself (Compile Error) "<< std::endl;
    // int number6 {333};
    // //p_number5 = &number6;  // Error : Trying to assign to read only location
	
	// std::cout << std::endl;

    //  std::cout << "Pointer is contant, pointed to value can change : " << std::endl;
    // int number7 {982};
    
    // int * const p_number7 { &number7};
    
    // std::cout << "p_number7 :" << p_number7 << std::endl;
    // std::cout << "*p_number7 : " << *p_number7 << std::endl;
    // std::cout << "Changing value pointed to through p_number7 pointer : " << std::endl;
    
    // *p_number7 = 456;
    // std::cout << "The value pointed to by p_number7 now is : " << *p_number7 << std::endl;
    
    // int number8 {2928};
    // std::cout << "Changing the address where p_number7 is pointing (Compile Error)." << std::endl;
    // //p_number7 = &number8;

//     const  char * const   students [] {
//         "Daniel Gray",
//         "Tuna Philbe",
//         "The Rock",
//         "Kumar Singh",
//         "Sam Ali",
//         "Dave Mahoro"
//     };
    

//     //Print out the students
// 	std::cout << std::endl;
//     std::cout << "Printing out the students : " << std::endl;
//     for ( const char * student : students){
//         std::cout << student << std::endl;
//     }

//      const char * new_student {"Bob the Great"};
//     //students[0] = new_student; // Compiler error


//    //Print out the students
// 	std::cout << std::endl;
//     std::cout << "Printing out the students : " << std::endl;
//     for ( const char * student : students){
//         std::cout << student << std::endl;
//     }

    // int scores[10] {11,12,13,14,15,16,17,18,19,20};
    
    // int * p_score { scores};
    
    // //Print the address
    // std::cout << "scores : " << scores << std::endl; // Array
    // std::cout << "p_score : " << p_score << std::endl;// Pointer
    // std::cout << "&scores[0]  : " << &scores[0] << std::endl;
    
    // //Print the content at that address
	// std::cout << std::endl;
	// std::cout << "Printing out data at array address : " << std::endl;
    // std::cout << "*scores : " << *scores << std::endl;
    // std::cout << "scores[0] : " << scores[0] << std::endl;
    // std::cout << "*p_score : " << *p_score << std::endl;
	// std::cout << "p_score[0] : " << p_score[0] << std::endl;


    // //Differences
    // int number {21};
    // p_score = &number;
    
    // //scores = &number; // The array name is a pointer, but a special pointer that kind of identifies
    //                    // the entire array. You'll get the error  : incompatible types in assignment
    //                   // of 'int*' to 'int[10]'
    
    // std::cout << "p_score : " << p_score << std::endl;// Pointer	

	// //std::size() doesn't work for raw pointers
	// std::cout << "size : " << std::size(scores) << std::endl;
	// //std::cout << "size : " << std::size(p_score) << std::endl; // Compiler error.

    int arr0[5]{ 1,2,3,4,5 };
    int arr1[5]{ 6,7,8,9,10 };
    int * p_arr1 {arr1};
    int * p_arr0 {arr0};

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i{}; i < std::size(arr0); ++i) {
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;

    //Print arr1
    std::cout << "arr1 : ";
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

     int * temp{nullptr};

    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    //Print arr0
    std::cout << "arr0 : ";
    for (size_t i{}; i < std::size(arr0); ++i) {
        std::cout << p_arr0[i] << " ";
    }
    std::cout << std::endl;

    //Print arr1
    std::cout << "arr1 : ";
    for (size_t i{}; i < std::size(arr1); ++i) {
        std::cout << p_arr1[i] << " ";
    }
    std::cout << std::endl;

    


    
    return 0;
}