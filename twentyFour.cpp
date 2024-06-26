#include <iostream>
#include <string>
#include<cstring>
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


    // std::string str1 {"Hello World"};
    // std::cout << "std::string can hold " << str1.max_size() << " characters" << std::endl;

    // std::string str1 {"Hello World"};
    // std::string str2;
    // std::cout << "str1 capacity : " << str1.capacity() << std::endl;
	// std::cout << "str2 capacity : " << str2.capacity() << std::endl;
	
	// str1 = "The sky is so blue, the grass is green. Kids are running all over the place";
	
    // std::cout << "str1 size : " << str1.size() << std::endl;
	// std::cout << "str1 capacity : " << str1.capacity() << std::endl;


    // std::string str1 {"Hello World"};
	// std::cout << "str1 capacity : " << str1.capacity() << std::endl; // 15
	// std::cout << "str1 size : " << str1.size() << std::endl;

    // str1.reserve(100);
    
    // std::cout << "str1 after reserve : " << str1 << std::endl; 
	// std::cout << "str1 capacity : " << str1.capacity() << std::endl; // 100
	// std::cout << "str1 size : " << str1.size() << std::endl;


    // std::string str1 {"Hello World"}; // 11
    // str1.reserve(100);

	// std::cout << "str1 capacity : " << str1.capacity() << std::endl; //100
	// std::cout << "str1 size : " << str1.size() << std::endl; // 11

	// str1.shrink_to_fit();
 
	// std::cout << "str1 capacity : " << str1.capacity() << std::endl; //11
	// std::cout << "str1 size : " << str1.size() << std::endl;//11


    //  std::string str1 {"The Lion Dad"};
    
    // std::cout << "str1 is : " << str1 << std::endl;
    // std::cout << "str1 size : " << str1.size() << std::endl;
    // std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    
    // str1.clear();

	// std::cout << std::endl;
    // std::cout << "str1 is : " << str1 << std::endl;
    // std::cout << "str1 size : " << str1.size() << std::endl;
    // std::cout << "str1 capacity : " << str1.capacity() << std::endl;


    //  std::string str2 {"122"};
    // std::cout << "str2 : " << str2 << std::endl;
    
    // str2.insert(1,4,'3');//Count can be 1,2,5,..
	
	// std::cout << std::endl;
    // std::cout << "str2 : " << str2 << std::endl;//1333322


    //  std::string str3 {"Hello!"};
    // const char * txt3{" World"};
	
	// std::cout << "str3 : " << str3 << std::endl;//Hello
	
    // str3.insert(5,txt3);
	
    // std::cout << std::endl;
    // std::cout << "str3 : " << str3 << std::endl;//Hello World!

    // std::string str4{"Hello!"};
    // const char * txt4{" World Health Organization"};
	
	// std::cout << "str4 : " << str4 << std::endl;

    // str4.insert(5,txt4,6);
	
    // std::cout << std::endl;
    // std::cout << "str4 : " << str4 << std::endl;


    // std::string str5{" World"};
    // std::string str6{"Hello!"};
	
	// std::cout << "str6 : " << str6 << std::endl;

    // str6.insert(5,str5);
	
    // std::cout << std::endl;
    // std::cout << "str6 : " << str6 << std::endl;


    // std::string str7{"Hello!"};
    // std::string str8{"Statistical Analysis of the World Population."};
	
	// std::cout << "str7 : " << str7 << std::endl;

    // str7.insert(5,str8,27,6);
	
    // std::cout << std::endl;
    // std::cout << "str7 : " << str7 << std::endl;


    // std::string str9 {"Hello World is a message used to start off things when learning programming!"};;
    
    // str9.erase(11,str9.size() - 12);
	// std::cout << "str9 : " << str9 << std::endl;

    // str9 = "Hello World is a message used to start off things when learning programming!";
	
	//Direct print out.Because this method returns a reference to the modified string
	// std::cout << "str9 : " << str9.erase(11,str9.size() - 12) << std::endl;


    // //push_back
    // //void push_back( CharT ch );
	// //Appends the given character ch to the end of the string. 
    // std::string str10 {"Hello World"};
    // str10.push_back('!');
    // std::cout << "str10 : " << str10 << std::endl;
	

    // //pop_back
    // //void pop_back();
	// //Removes the last character from the string. 
    // std::string str11 {"Hello World!!"};
    // str11.pop_back();
    // std::cout << "str11 : " << str11 << std::endl;

    std::string hello_str{"Hello"};
    std::string bello_str{"Bello"};
    
    
	//Using the comparison operators
	// std::cout << std::endl;
	// std::cout << "Comparing with comparison operators : " << std::endl;
	
	// std::cout << std::boolalpha;
    // std::cout << hello_str << "==" <<  bello_str <<" : " << (hello_str == bello_str) << std::endl;//false
    // std::cout << hello_str << "!=" <<  bello_str <<" : " << (hello_str != bello_str) << std::endl; //true
    // std::cout << hello_str << ">" <<  bello_str <<" : " << (hello_str > bello_str) << std::endl; // true
    // std::cout << hello_str << ">=" <<  bello_str <<" : " << (hello_str >= bello_str) << std::endl; // true
    // std::cout << hello_str << "<" <<  bello_str <<" : " << (hello_str < bello_str) << std::endl; // false
    // std::cout << hello_str << "<=" <<  bello_str <<" : " << (hello_str <= bello_str) << std::endl; // false

    // const char * c_string1 {"Bello"};
    // hello_str = "Hello";
    
    // std::cout << "hello_str.size() : " << hello_str.size() << std::endl;
    // std::cout << "std::strlen(c_string1) : " << std::strlen(c_string1) << std::endl;
    // std::cout << hello_str << "==" <<  c_string1 <<" (C-String) : " << (hello_str == c_string1) << std::endl; //false
    // std::cout << c_string1 << " (C-String) ==" <<  hello_str <<" : " << (c_string1 == hello_str) << std::endl;//false
	// std::cout << c_string1 << " (C-String) >=" <<  hello_str <<" : " << (c_string1 >= hello_str) << std::endl;//false
	// std::cout << c_string1 << " (C-String) <" <<  hello_str <<" : " << (c_string1 < hello_str) << std::endl; // true



    hello_str = "hello";

    const char hello_char_array[] {'h','e','l','l','o','\0'};//It works right if you put the '\' yourself
	std::cout << hello_str << "== hello_char_array : "  << (hello_str == hello_char_array) << std::endl;

    return 0;
}