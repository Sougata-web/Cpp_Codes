#include<iostream>
using namespace std;

int main(){
    // unsigned char unsigned_char{53u};
    // short short_var{-32768};
    // short int short_int{455};
    // signed short signed_short{122};


    // unsigned int prize {1'500'00'0u};
    // cout<<"The prize is: "<<prize<<endl;


    unsigned int hex_number{ 0x22BU};
    int hex_number2 {0x400};
    cout<<::hex<<"The hex is: "<<hex_number<<endl;
    cout<<::dec<<"The hex is: "<<hex_number2<<endl;

    int black_color{0xffffff};
    cout<<"Black color is: "<<::dec<<black_color<<endl;

    int octal_number {0777u}; 
    cout<<"Octal Number is: "<<octal_number<<endl;

    int error_octal{055};
    cout<<"Error octal is: "<<error_octal<<endl;






    return 0;
}