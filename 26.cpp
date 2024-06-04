#include<iostream>
#include<string>
using namespace std;

int main(){

    // std::string string1{"Water was poured in the heater"};
    // std::string search_for{"ter"};
    
    // size_t found_pos=string1.find(search_for);
    // std::cout << "find('ter') : index [" << found_pos << "]" << std::endl;// index : 2

    // search_for="red";
    // found_pos=string1.find(search_for);
    // std::cout << "find('ter') : index [" << found_pos << "]" << std::endl;// index : 2

    // search_for = "chicken";
    // found_pos = string1.find(search_for);
    // std::cout << "find('chicken') : index ["<< found_pos << "]" << std::endl;//huge number

    // //std::string::npos
    // std::cout << "npos : " << std::string::npos << std::endl;

    // size_t large = -1;
    // std::cout << "large : " << large << std::endl;

    // std::string string1{"Water was poured in the heater"};
    // std::string search_for{"red"};
    
    // size_t found_pos = string1. find(search_for);
    // if(found_pos == std::string::npos){
    //     std::cout << "Could not find the string 'red' : " << std::endl;
    // }else{
    //     std::cout << "'red' found starting at position : " << found_pos << std::endl;
    // }


    // //Search for chicken and check result against std::string::npos
    // search_for = "chicken";
    // found_pos = string1.find(search_for);
    
    // if(found_pos == std::string::npos){
    //     std::cout << "Could not find the string 'chicken'. " << std::endl;
    // }else{
    //     std::cout << "'chicken' found starting at position : " << found_pos << std::endl;
    // }

    // std::string string1{"Water was poured in the heater"};
    // std::string search_for{"ter"};

    // size_t found_pos = string1.find(search_for); 
    // std::cout << "ter found at position : " << found_pos << std::endl;
    
    // found_pos = string1.find(search_for,0);
    // std::cout << "ter found at position : " << found_pos << std::endl;
    
    // found_pos = string1.find(search_for,10);
    // std::cout << "ter found at position : " << found_pos << std::endl;

    // std::string string2 = "beer is packaged by her in beer cans around here.";
	// const char * c_string2{"her"};
	
	// size_t found_pos = string2.find(c_string2,2);
	// if( found_pos!= std::string::npos){
	// 	std::cout <<c_string2 <<  " found at position : " << found_pos << std::endl;
	// }else{
    //     std::cout << "Could not find the string :  " << (c_string2) <<  std::endl;
	// }

    // float float_var {22.3f};
    // double double_var {1.34847e5};
    // int int_var {223};
    
    // std::string float_str {std::to_string(float_var)};;
    // std::string double_str{std::to_string(double_var)};;
    // std::string int_str{std::to_string(int_var)};
    
    // std::cout << "size of float_str : " << float_str.size()<< std::endl;
    // std::cout << "float_var : " << float_var << std::endl;
	// std::cout << "float_str : " << float_str<< std::endl;
	
    // std::cout << "double_var : " << double_var << std::endl;
	// std::cout <<"double_str : " << double_str<< std::endl;
	
    // std::cout << "int_var : " << int_var << std::endl;
	// std::cout << "int_str : " << int_str<< std::endl;


    // std::string number_str{"34.567"};//Could even be negative

	// int int_var = std::stoi(number_str);
	// std::cout << "int_var : " << int_var << std::endl;
	// std::cout << "sizeof(int_var) : " << sizeof(int_var) << std::endl;
	
	// long long_var = std::stol(number_str);
	// std::cout << "long_var : " << long_var << std::endl;
	// std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;
	
	// long long long_long_var = std::stoll(number_str);
	// std::cout << "long_long_var : " << long_long_var << std::endl;
	// std::cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << std::endl;


    // std::string number_str = "34.567";
	// // std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
	// 						// and become huge numbers of their type
	// std::cout << std::endl;
	// std::cout << "unsigned long, unsigned long long : " << std::endl;
	
	// unsigned long u_l_var = std::stoul(number_str);
	// std::cout << "u_l_var : " << u_l_var << std::endl;
	// std::cout << "sizeof(u_l_var) : " << sizeof(u_l_var) << std::endl;
	
	// unsigned long long u_ll_var = std::stoull(number_str);
	// std::cout << "u_ll_var : " << u_ll_var << std::endl;
	// std::cout << "sizeof(u_ll_var) : " << sizeof(u_ll_var) << std::endl;

    // std::string number_str = "34.567";

	// float float_var = std::stof(number_str);
	// std::cout << "float_var : " << float_var << std::endl;
	// std::cout << "sizeof(float_var) : " << sizeof(float_var) << std::endl;
	
	// double double_var = std::stod(number_str);
	// std::cout << "double_var : " << double_var << std::endl;
	// std::cout << "sizeof(double_var) : " << sizeof(double_var) << std::endl;
	
	// long double long_double_var = std::stold(number_str);
	// std::cout << "long_double_var : " << long_double_var << std::endl;
	// std::cout << "sizeof(long_double_var) : " << sizeof(long_double_var) << std::endl;

    // std::cout << "He said \"Get out of here immediately!\"" << std::endl;


//      std::string todo_list{ "\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries" };
//     std::string windows_path{ "D:\\sandbox\\testProject\\hello.txt" };
//     std::string linux_path{ "/home/username/files/hello.txt" };
//     std::string hint{ " \"\\\\\" escapes a backslash character like \\." };

//     std::cout << "todo_list : " << std::endl;
//     std::cout << todo_list << std::endl;
//     std::cout << "windows_path : " << windows_path << std::endl;
//     std::cout << "linux_path : " << linux_path << std::endl;
//     std::cout << "hint : " << hint << std::endl;
//    std::cout << "\a" << std::endl ;


//The bad way to do things
    // std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tpick groceries"};
    // std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
	// std::string linux_path {"/home/username/files/hello.txt"};
    // std::string hint {" \"\\\\\" escapes a backslash character like \\."};
	
	// std::cout << "todo_list : " << std::endl;
	// std::cout << todo_list << std::endl;
	// std::cout << "windows_path : " << windows_path << std::endl;
	// std::cout << "linux_path : " << linux_path << std::endl;
	// std::cout << "hint : " << hint << std::endl;

    // string to_do_list{R"(
    // Clean The House
    // Walk The Dog
    // Do Laundry)"};
    // cout<<to_do_list<<endl;

    //     const char* c_string {  R"(
    // 	Clean the house
    // 	Walk the dog
    // 	Do Laundry
    // 	Pick groceries
    //     )"} ;

    //    std::cout << "to_do_list : " << std::endl;
    //    std::cout << c_string << std::endl;

   //Fixing other escaped strings
    std::string windows_path1 {R"(D:\sandbox\testProject\hello.txt)"};
	std::string linux_path1 {R"(/home/username/files/hello.txt)"};
    std::string hint1 {R"("\\" escapes a backslash character like \.)"};	
	
	std::cout << "windows_path1 : " << windows_path1 << std::endl;
	std::cout << "linux_path1 : " << linux_path1 << std::endl;
	std::cout << "hint1 : " << hint1 << std::endl;

     std::string sentence {R"--(The message was "(Stay out of this!)")--"};

   std::cout << "sentence : " << sentence << std::endl;


    
    return 0;
}