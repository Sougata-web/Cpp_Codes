#include<iostream>
using namespace std;

int main(){

    // int scores[10] {11,12,13,14,15,16,17,18,19,20};

    // int * p_score{scores};

    // std::cout << "Values in scores array (p_score pointer increment) : " << std::endl;

    // std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	// ++p_score; // Moves froward by sizeof(int) : 4 bytes
	
	// std::cout << "Address : " << p_score << " value : " <<  *(p_score) << std::endl;
	// ++p_score;

    // std::cout << std::endl;
	// std::cout << "Explicit addition of integer : " << std::endl;
	// p_score = scores; // Reset the pointer to the start of the array
	// std::cout << "scores[4] : " << *(p_score + 4) << std::endl; // Moves forward by 4 * sizeof(int)

    // p_score = scores;
    
	// std::cout << std::endl;
    // std::cout << "Pointer arithmetic on p_scores pointer and a for loop: " << std::endl;
    // for ( size_t i{0} ; i < std::size(scores) ; ++i){
    //     std::cout <<"Value : "<< *(p_score + i) << std::endl; // scores[i]
    // }

    // p_score = scores;
    
	// std::cout << std::endl;
    // std::cout << "Pointer arithmetic on array name: " << std::endl;
    // for ( size_t i{0} ; i < std::size(scores) ; ++i){
    //     std::cout <<"Value : "<< *(scores + i) << std::endl;
	// }

    // std::cout<< std::endl;
    // std::cout << "Elements in reverse order with decrementing pointer arithmetic: " << std::endl;
    // for ( size_t i{std::size(scores)} ; i > 0 ; --i){
    //     std::cout <<"Value : "<< *(scores + i -1) << std::endl;
    // }

    // std::cout<< std::endl;
    // std::cout << "Elements in reverse order -- arithmetic on the p_scores pointer: " << std::endl;
    // p_score = scores + std::size(scores) -1;
	// for ( size_t i{std::size(scores)} ; i > 0 ; --i){
    //     std::cout <<"Value : "<< *(p_score--) << std::endl;
    // }

    // std::cout<< std::endl;
    // std::cout << "Elements in reverse order with array index notation: " << std::endl;
    // for ( size_t i{std::size(scores)} ; i > 0 ; --i){
    //     std::cout <<"Value : "<< scores [ i -1] << std::endl;
    // }

    // p_score = scores;
    
    // scores[0] = 31; // Array index notation
    // *(scores + 1) = 32; // Equivalent to scores[1] = 32 . Pointer arithmetic on array name
    // *(p_score + 2) = 33; // Equivalent to scores[2] = 33 . Pointer arithmetic on p_score pointer
    
	// std::cout << std::endl;
	// std::cout << "Printing out the array after modification of 3 first elements: " << std::endl;
    // for ( size_t i{0} ; i < std::size(scores) ; ++i){
    //     std::cout <<"Value : "<< scores[i] << std::endl;
    // }

    // int scores[10] {11,12,13,14,15,16,17,18,19,20};
    
	//Array index notation
	//    int * pointer1 {&scores[0]};
	//    int * pointer2 {&scores[8]};

	//Pointer arithmetic notation
    // int * pointer1 {scores + 0};
    // int * pointer2 {scores + 8};
    
    // std::cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << std::endl; // 8 
    // std::cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << std::endl; // -8


    // std::ptrdiff_t pos_diff = pointer2 - pointer1;
    // std::ptrdiff_t neg_diff = pointer1 - pointer2;
    // std::cout << "pointer2 - pointer1 : " << pos_diff << std::endl; // 8 
    // std::cout << "pointer1 - pointer2 : " << neg_diff << std::endl; // -8
    // std::cout << "sizeof(std::ptrdiff_t) : " << sizeof(std::ptrdiff_t) << std::endl;


    // std::cout << "Comparing pointers : " <<std::boolalpha <<  std::endl;
	
    // std::cout << "pointer1 > pointer2 : " <<  (pointer1 > pointer2) << std::endl;
    // std::cout << "pointer1 < pointer2 : " << (pointer1 < pointer2) << std::endl;
    // std::cout << "pointer1 >= pointer2 : " <<  (pointer1 >= pointer2) << std::endl;
    // std::cout << "pointer1 <= pointer2: " << (pointer1 <= pointer2) << std::endl;
    // std::cout << "pointer1 == pointer2 : " <<  (pointer1 == pointer2) << std::endl;
    // std::cout << "pointer1 != pointer2 : " << (pointer1 != pointer2) << std::endl;


    // int arr0[5]{ 1,2,3,4,5 };
    // int arr1[5]{ 6,7,8,9,10 };

    //  int * p_arr1 {arr1};
    //  int * p_arr0 {arr0};

    // //Print arr0
    // std::cout << "arr0 : ";
    // for (size_t i{}; i < std::size(arr0); ++i) {
    //     std::cout << *(p_arr0 + i) << " ";
    // }
    // std::cout << std::endl;

    // //Print arr1
    // std::cout << "arr1 : ";
    // for (size_t i{}; i < std::size(arr1); ++i) {
    //     std::cout << *(p_arr1 + i) << " ";
    // }
    // std::cout << std::endl;

    // int temp[5];

    // //Move data from arr1 into temp
    // for (size_t i{ 0 }; i < std::size(arr1); ++i) {
    //     temp[i] = arr1[i];
    // }

    // //Move data from arr0 to arr1
    // for (size_t i{ 0 }; i < std::size(arr0); ++i) {
    //     arr1[i] = arr0[i];
    // }

    // //Move data temp to arr0
    // for (size_t i{}; i < std::size(temp); ++i) {
    //     arr0[i] = temp[i];
    // }
	
    // int * temp{nullptr};

    // temp = p_arr1;
    // p_arr1 = p_arr0;
    // p_arr0 = temp;

    // //Print arr0
    // std::cout << "arr0 : ";
    // for (size_t i{}; i < std::size(arr0); ++i) {
    //     std::cout << *(p_arr0 + i) << " ";
    // }
    // std::cout << std::endl;

    // //Print arr1
    // std::cout << "arr1 : ";
    // for (size_t i{}; i < std::size(arr1); ++i) {
    //     std::cout << *(p_arr1 + i) << " ";
    // }
    // std::cout << std::endl;

    // int number {22}; // Stack
	
	// int * p_number = &number;
	
	// std::cout << std::endl;
	// std::cout << "Declaring pointer and assigning address : " << std::endl;
	// std::cout << "number : " << number << std::endl;
	// std::cout << "p_number : " << p_number << std::endl;
	// std::cout << "&number : " << &number << std::endl;
	// std::cout << "*p_number : " << *p_number <<  std::endl;
	
	
	// int * p_number1; // Uninitialized pointer , contains junk address
	// int number1 {12};
	// p_number1 = &number1; // Make it point to a valid address
	// std::cout << std::endl;
	// std::cout << "Uninitialized pointer : " << std::endl;
	// std::cout << "*p_number1 : " << *p_number1 << std::endl;

    // int *p_number2; // Contains junk address : could be anything
    // std::cout << "Writting in the 55" << std::endl;
	// *p_number2 = 55; // Writing into junk address : BAD!
	// std::cout << std::endl;
	// std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
	// std::cout << "p_number2 : " << p_number2 << std::endl; // Reading from junk address.
    // std::cout << "Dereferencing bad memory" << std::endl;
	// std::cout << "*p_number2 : " << *p_number2 << std::endl;

    //int *p_number3{nullptr}; // Also works
	// int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr
	// 					// A pointer pointing nowhere
    // std::cout << "Writting into nullptr memory" << std::endl;
	// // *p_number3 = 33; 
    // // Writting into a pointer pointing nowhere : BAD, CRASH
    // std::cout << "Done writting" << std::endl;
	
	// std::cout << std::endl;
	// std::cout << "Reading and writting through nullptr : " << std::endl;
	// std::cout << "p_number3 : " << p_number3 << std::endl;
	// std::cout << "*p_number3 : " << *p_number3 << std::endl;
    // Reading from nullptr
	// BAD, CRASH.

    // int *p_number4{nullptr};
	// p_number4 = new int; 	// Dynamically allocate space for a single int on the heap
	// 						// This memory belongs to our program from now on. The system
	// 						// can't use it for anything else, untill we return it.
	// 						//After this line executes, we will have a valid memory location
	// 						// allocated. The size of the allocated memory will be such that it
	// 						// can store the type pointed to by the pointer
						
					
	// *p_number4 = 77; // Writting into dynamically allocated memory
	// std::cout << std::endl;
	// std::cout << "Dynamically allocating memory : " << std::endl;
	// std::cout <<"*p_number4 : " << *p_number4 << std::endl;

    // //Return memory to the OS
    // delete p_number4;
    // p_number4 = nullptr;

//      int *p_number5{ new int}; // Memory location contains junk value
//      int *p_number6{ new int (22) }; // use direct initialization
//      int *p_number7{ new int { 23 } }; // use uniform initialization
	 
// 	 std::cout << std::endl;
// 	 std::cout << "Initialize with valid memory address at declaration : " << std::endl;
// 	 std::cout << "p_number5 : " << p_number5 << std::endl;
// 	 std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value
	 
// 	 std::cout << "p_number6 : " << p_number6 << std::endl;
// 	 std::cout << "*p_number6 : " << *p_number6 << std::endl;
	 
// 	 std::cout << "p_number7 : " << p_number7 << std::endl;
// 	 std::cout << "*p_number7 : " << *p_number7 << std::endl;
	 
// 	 //Remember to release the memory
// 	  delete p_number5;
// 	  p_number5 = nullptr;
	  
// 	  delete p_number6;
// 	  p_number6 = nullptr;
	  
// 	  delete p_number7;
// 	  p_number7 = nullptr;


//       //Can reuse pointers
//       p_number5 = new int(81);
//       std::cout << "*p_number : " << *p_number5 << std::endl;


//       delete p_number5;
//       p_number5 = nullptr;

//       //Calling delete twice on a pointer : BAD!
//       p_number5 = new int(99);
//       std::cout << "*p_number5 : " << *p_number5 << std::endl;


//       delete p_number5;
//     //   delete p_number5;

                                                            
//    std::cout << "Program is ending well" << std::endl;

// int * p_number; // Dangling uninitialized pointer
   
// 	std::cout << std::endl;
// 	std::cout << "Case 1 : Uninitialized pointer : ." << std::endl;
// 	std::cout << "p_number : " << p_number << std::endl;
//     std::cout << "*p_number : " << *p_number << std::endl; //CRASH!

//     std::cout << std::endl;
//    std::cout << "Case 2 : Deleted pointer" << std::endl;
//    int * p_number1 {new int{67}};
   
//    std::cout << "*p_number1 (before delete) : " << *p_number1 << std::endl;
   
//    delete p_number1;
		
//    std::cout << "*p_number1(after delete) : " << *p_number1 << std::endl;
    

    // std::cout << std::endl;
	// std::cout << "Case 3 : Multiple pointers pointing to same address : " << std::endl;
	
    // int *p_number3 {new int{83}};
    // int *p_number4 {p_number3};
    
    // std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    // std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;
    
    // //Deleting p_number3
    // delete p_number3;
    
    // //p_number4 points to deleted memory. Dereferncing it will lead to
	// //undefined behaviour : Crash/ garbage or whatever
    // std::cout<< "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;

    // std::cout << std::endl;
	// std::cout << "Solution 1 : " << std::endl;
    // int *p_number5{nullptr};
    // int *p_number6{new int(87)};
	
	// //Check for nullptr before use

	// if(p_number6!= nullptr){
	// 	std::cout << "*p_number6 : " << *p_number6 << std::endl;
	// }else{
    //     std::cout << "Invalid address" << std::endl;
    // }

    // std::cout << std::endl;
	// std::cout << "Solution 2 : " << std::endl;
    // int *p_number7{new int{82}};
    
    // //Use the pointer however you want
    // std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;
   
    // delete p_number7;
    // p_number7 = nullptr; // Reset the pointer
	
	// //Check for nullptr before use
	// if(p_number7!= nullptr){
	// 	std::cout << "*p_number7 : " << *p_number7 << std::endl;
	// }else{
    //     std::cout << "Invalid memory access!" << std::endl;
    // }

    std::cout << std::endl;
	std::cout << "Solution 3 : " << std::endl;
    int * p_number8 {new int{382}};// Let's say p_number8 is the master pointer
    int * p_number9 {p_number8};
    
    //Dereference the pointers and use them
    std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;
    
    if(!(p_number8 == nullptr)){ // Only use slave pointers when master pointer is valid
           std::cout<< "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }
    
    delete p_number8; // Master releases the memory
    p_number8 = nullptr;
    
    if(!(p_number8 == nullptr)){ // Only use slave pointers when master pointer is valid
           std::cout<< "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }else{
        std::cerr << "WARNING : Trying to use an invalid pointer" << std::endl;
    }
    std::cout << "Program is ending well" << std::endl;

    return 0;
}