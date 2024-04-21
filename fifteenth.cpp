#include<iostream>
using namespace std;

int main(){
    
    // for(size_t i{0} ; i < 10000000 ; ++i){
    //     int * data = new int[100000000];
    // }

    // for(size_t i{0} ; i < 100 ; ++i){
    //     try{
    //         int * data = new int[1000000000];
    //     }catch(std::exception& ex){
    //         std::cout << "  Something went wrong : " << ex.what() << std::endl;
    //     }
    // }

    // for(size_t i{0} ; i < 100 ; ++i){
   
    //     int * data = new(std::nothrow) int[1000000000];

    //     if(data!=nullptr){
    //         std::cout << "Data allocated" << std::endl;
    //     }else{
    //         std::cout << "Data allocation failed" << std::endl;
    //     }
       
    // }
    // std::cout << "Program ending well" << std::endl;


    // std::cout << std::endl;
	// std::cout << "Verbose nullptr check: " << std::endl;
	
    // int *p_number{};//Initialized to nullptr
    // p_number = new int(7);
    
    
    // if(!(p_number==nullptr)){
    //     std::cout << "p_number points to a VALID address : "<< p_number << std::endl;
    //     std::cout << "*p_number : " << *p_number << std::endl;
    // }else{
    //     std::cout << "p_number points to an INVALID address." << std::endl;
    // }

    //  if(p_number){
    //     std::cout << "p_number points to a VALID address : "<< p_number << std::endl;
    //     std::cout << "*p_number : " << *p_number << std::endl;
    // }else{
    //     std::cout << "p_number points to an INVALID address." << std::endl;
    // }

    // delete p_number;
    // nullptr;

    // //It is OK call delete on a nullptr
	// //Calling delete on a nullptr is OK
    // int *p_number1 {};
    
    // delete p_number1;	// This won't cause any problem
						//if p_number1 contains nullptr

    // if(p_number1 != nullptr){
    //     delete p_number1;
    // }


    // int *p_number {new int{67}}; // Points to some address, let's call that address1
    
    // //Should delete and reset here 
    
    // int number{55}; // stack variable
    
    // p_number = &number;

    // int *p_number1 {new int{55}};
    
	// //Use the pointer
    
	// //Should delete and reset here.
	
    // p_number1 = new int{44}; // memory with int{55} leaked.

    // delete p_number1;
    // p_number1 = nullptr;


    // //Nested scopes with dynamically allocated memory
	// {
	// 	int *p_number2 {new int{57}};

    //     //Use the dynamic memory

	// }
	// //Memory with int{57} leaked.

    // std::cout << "Program ending well" << std::endl;

    const size_t size{10};
    
    //Different ways you can declare an array
	//dynamically and how they are initialized
	
    double *p_salaries { new double[size]}; // salaries array will
															//contain garbage  values
    int *p_students { new(std::nothrow) int[size]{} }; // All values initialized to 0 
    
    double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}};

    if(p_scores){
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores."<< std::endl;
        
        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for( size_t i{}; i < size ; ++i){
           std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl; 
        }
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

   delete [] p_scores;
   p_scores = nullptr;

   //Static arrays Vs dynamic arrays
   std::cout << "=====================================" << std::endl;

   int scores[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the stack

   std::cout << "scores size : " << std::size(scores) << std::endl;
   for( auto s : scores){
       std::cout << "value : " << s << std::endl;
   }

//     int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the heap.
//    //std::cout << "p_scores1 size : " << std::size(p_scores) << std::endl;
   
//    for( auto s : p_scores1){
//        std::cout << "value : " << s << std::endl;
//    }
   

    return 0;
}