#include<iostream>
using namespace std;

int main(){
    // cout<<"isalnum : "<<endl;
    // cout<<"C is alphanumeric: "<<isalnum('C')<<endl;
    // std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    // char input_char {'*'};

    // cout<<isalnum('*')<<endl;
	// if(std::isalnum(input_char)){
	// 	std::cout << input_char << " is alhpanumeric." << std::endl;
	// }else{
	// 	std::cout << input_char <<  " is not alphanumeric." << std::endl;
	// }

    // std::cout << std::endl;
    // std::cout << "std::isblank : "<<std::endl;
    // char message[] {"Hello there. How are you doing? The sun is shining."};
    // std::cout << "message : " << message << std::endl;
    
    // //Find and print blank index
    // size_t blank_count{};
    // for (size_t i{0} ; i < std::size(message); ++i){
    //     //std::cout << "Value : " << message[i] << std::endl;
    //     if(std::isblank(message[i])){
    //         std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
    //         ++blank_count;
    //     }
    // }
    // std::cout << "In total we found " << blank_count << " blank characters."<< std::endl;

    // std::cout << "std::islower and std::isupper : "<<std::endl;

    // std::cout << std::endl;
    // char thought[] {"The C++ Programming Language is one of the most used on the Planet"};
    // size_t lowercase_count{};
    // size_t upppercase_count{};
    
    // //Print original string for ease of comparison on the terminal
    // std::cout << "Original string  : " << thought << std::endl;
    
    // for( auto character : thought){
    //     if(std::islower(character)){
    //         std::cout <<" " << character;
    //         ++lowercase_count;
    //     }
    //     if(std::isupper(character)){
    //         ++upppercase_count;
    //     }
    // }
    // std::cout << std::endl;
    // std::cout << "Found " << lowercase_count << " lowercase characters and "
    //             <<upppercase_count << " uppercase characters."<<  std::endl;

    std::cout << std::endl;
    std::cout << "std::isdigit : "<<std::endl;

    char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
	std::cout << "statement : " << statement << std::endl;
    
    size_t digit_count{};
    
    for(auto character : statement){
        if(std::isdigit(character)){
            std::cout << "Found digit : " << character << std::endl;
            ++digit_count;
        }
    }
    std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;


    return 0;
}