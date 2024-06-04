#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){

    // string str1{"Hello"};
    // string str2{"World"};

    // cout<<"str1.comapre(str2): "<<str1.compare(str2)<<endl;
    // cout<<"str2.comapre(str1): "<<str2.compare(str1)<<endl;

    // string str3{"Hello World"};
    // std::cout << "Comparing 'World' to 'Hello' : " << str3.compare(6,5,str1) << std::endl;//1
    // string str5{"Hello"};
    // const char * message{"World"};
    // std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl;//-1
    // std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl; //-1


    std::string str1 {"Finding Nemo"}; // Replace Finding with 'Searching For'
	std::string str1_2 {"Searcing For"};
	std::cout << "str1 : " << str1 << std::endl;
	
	std::cout << "Replacing..." << std::endl;
    str1.replace(0,7,str1_2);
	
    std::cout << "str1 : " << str1 << std::endl;

    std::string str2 {"Finding Nemo"};
    std::string str3 {"The Horse was Found in the Fields Searching For Food"};
	
	std::cout << "str2 : " << str2 << std::endl;
	
	std::cout << "Replacing..." << std::endl;
    str2.replace(0,7,str3,34,13);
	
    std::cout << "str2 : " << str2 << std::endl;

    std::string str4{"Climbing Kirimanjaro"};
    char txt4[15] {}; //Initialized with zero equivalent for characters which is '\0'
    std::cout << "std::size(txt4) : " << std::size(txt4) << std::endl;
    std::cout << "txt4 : " << txt4 << std::endl;
	
	std::cout << "Copying..." << std::endl;
    str4.copy(txt4,11,9);
	
	//Safe to print because the char array was initialized with '\0' s.
    std::cout << "txt4 : " << txt4 << std::endl;
    





    
    return 0;
}