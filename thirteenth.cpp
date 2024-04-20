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


    const char * predictions []  {
        "a lot of kids running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." 
    };

    bool end{ false };

    const int  max_length{ 15 };
    char name[max_length]{};

    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    while (!end) {
        std::cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

        std::cout << predictions[rand_num] << std::endl;



        
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
        

        std::cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;



    
    return 0;
}