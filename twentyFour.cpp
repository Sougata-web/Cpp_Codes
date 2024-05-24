#include <iostream>
#include <string>
using namespace std;

int main()
{

    // string st1{"Hello"};
    // string st2{"World"};

    // string message=st1 + " my "+ st2;
    // cout<< message<<endl;

    // string str5{"Hello World "};
    // string str6{"Hello " "World"};
    // string str7{string {"Hello"}+ " World"};

    // cout<<str5<<endl;
    // cout<<str6<<endl;
    // cout<<str7<<endl;

    // string str8{"Hello"s + " World"};
    // cout<<str8<<endl;

    // string str9;
    // {
    //     using namespace std:: string_literals;
    //     str9="Hello"s+" World";
    // }
    // cout<<str9<<endl;

    // std::cout << std::endl;
    // std::cout << "Using the append method : " << std::endl;
    // std::string str10 {"Hello"};
    // std::string str11 {" World"};
    // std::string str12 = str10.append(str11);
    // std::cout << "str12 : " << str12 << std::endl;

    // std::string str13{std::string{"Hello"}.append(" World")};
    // std::cout << "str13 : " << str13 << std::endl;

    // std::cout << std::endl;
    // std::cout << "Append method can do more than + operator : " << std::endl;
    // std::string str14 {"Hello "};
    // std::string str15 {str14.append(5,'?')}; // Appends 5 '?' characters
    // std::cout << "str15 : " << str15 << std::endl;

    // std::string str16{"The world is our shared home."};
    // std::string str17{"Hello "};
    // std::string str18{str17.append(str16,4,5)};// Append a sub-section of another string
    // 											// starting from index 4 , 5 characters
    // std::cout << "str18 : " << str18 << std::endl;

    // //Direct output
    // std::string str19{"Hello "};
    // std::cout << "Direct output : " << str19.append(str16,4,5) << std::endl;

    // std::cout << std::endl;
    // std::cout << "Concatenating strings and characters : " << std::endl;
    // std::string str20 {"Hello"};
    // std::string str21 {"World"};
    // std::string str22 {str20 + ' ' + str21};// The space in between is a character
    // std::cout << "str22 : " << str22 << std::endl;

    // std::string str23 = "Hello";
    // (str23 += ',') += ' ';
    // std::cout << "str23 : " << str23 << std::endl;

    // //Another solution
    // std::string str24 = "Hello"; // Take out the , and space we added before.
    // std::string str25 {"I am here to see you."};
    // std::string str26 {str24 + ',' + ' ' + str25};
    // std::cout << "str26 : " << str26 << std::endl;

    // std::cout << std::endl;
    // std::cout << "Appending C-Strings and char arrays : "<<std::endl;
    // const char message1[] {"World"};
    // const char * message2 {"World"};

    // std::cout <<" + char array : "  <<  std::string{"Hello "} + message1 << std::endl;
    // std::cout <<" + C-String : "  <<  std::string{"Hello "} + message2 << std::endl;
    // std::cout <<"append char array : "  <<  std::string{"Hello "}.append(message1) << std::endl;
    // std::cout <<"append C-String : "  <<  std::string{"Hello "}.append( message2)<< std::endl;

    // string str26{"Hello "};

    // str26+=to_string(67.5f);

    // cout<<"str26 : "<<str26<<endl;

    // string str1{"Hello there "};

    // cout<<str1.size()<<endl;

    // cout<<"Str1(for loop ) : ";
    // for(size_t i{};i<str1.size();++i){
    //     cout<<" "<<str1[i];
    // }
    // cout<<endl;

    // std::string str1 {"Hello there"};
    // std::cout << std::endl;
    // std::cout << "Using range based for loop : "<< std::endl;

    // std::cout << "str1(range based for loop) : " ;
    // for(char value : str1){
    //     std::cout << " " << value ;
    // }
    // std::cout << std::endl;

    // std::cout << std::endl;
    // std::cout << "Using the std::string::at() method : "<< std::endl;

    // std::string str1 {"Hello there"};
    // std::cout << "str1 : (for loop with at()) : " ;

    // for(size_t i{}; i < str1.size(); ++i){
    //     std::cout << " " << str1.at(i) ;
    // }
    // std::cout << std::endl;

    // string str1 {"Hello there"};

    // str1[0]='B';
    // str1.at(1)='a';

    // cout<<"Modified string: "<<str1<<endl;

    // std::string str2{"The Phoenix King"};
    // char& front_char = str2.front();
    // char& back_char = str2.back();
    // std::cout << "The front char in str2 is : " << front_char << std::endl;
    // std::cout << "The back char in str2 is : " << back_char << std::endl;

    // front_char = 'r';
    // back_char = 'd';

    // std::cout << "str2 : " << str2 << std::endl;

    // std::string str2{"The Phoenix King"};
    // const char * wrapped_c_string = str2.c_str();
    // std::cout << "Wrapped c string : " << wrapped_c_string << std::endl;

    // std::string str2 { "Hello World"};

    // char * data = str2.data();
    // std::cout << "Wrapped c string : " << data << std::endl;

    // data[0] = 'B';// This also changes std::string.

    // std::cout << "Wrapped c string (after modification) : " << data << std::endl;
    // std::cout << "Original string (after modification ) :" << str2 << std::endl;

    //     std::string str1 {"Hello World"};
    //     std::string str2;
    //     std::string str3{};

    //     //Empty
    //     std::cout << std::endl;
    //     std::cout << "std::string::empty() : " << std::endl;
    //     std::cout << "str1 is empty : " << std::boolalpha << str1.empty() << std::endl;
    //     std::cout << "str2 is empty : " << std::boolalpha << str2.empty() << std::endl;
    //     std::cout << "str3 is empty : " << std::boolalpha << str3.empty() << std::endl;

    //     //Size
    //     std::cout << std::endl;
    //     std::cout << "std::string::size() : " << std::endl;
    //     std::cout << "str1 contains " << str1.size() << " characters" << std::endl; //11
    //     std::cout << "str2 contains " << str2.size() << " characters" << std::endl; // 0
    //     std::cout << "str3 contains " << str3.size() << " characters" << std::endl; // 0

    //    //Length
    //     std::cout << std::endl;
    //     std::cout << "std::string::length() : " << std::endl;
    //     std::cout << "str1 contains " << str1.length() << " characters" << std::endl; //11
    //     std::cout << "str2 contains " << str2.length() << " characters" << std::endl; // 0
    //     std::cout << "str3 contains " << str3.length() << " characters" << std::endl; // 0


    std::string str1 {"Hello World"};
    std::cout << "std::string can hold " << str1.max_size() << " characters" << std::endl;

    std::string str1 {"Hello World"};
    std::string str2;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
	std::cout << "str2 capacity : " << str2.capacity() << std::endl;
	
	str1 = "The sky is so blue, the grass is green. Kids are running all over the place";
	
    std::cout << "str1 size : " << str1.size() << std::endl;
	std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    return 0;
}