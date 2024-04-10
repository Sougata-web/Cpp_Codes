#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int num1=15;
    // int num2=017;
    // int num3=0x0f;
    // int num4=0b00001111;

    // cout<< num1<<endl;
    // cout<< num2<<endl;
    // cout<< num3<<endl;
    // cout<< num4<<endl;
    

    // int apple(10);
    // int new_Numbers(2.8);
    // cout<<apple<<endl;
    // cout<<new_Numbers<<endl;

    // int bike_count=2;
    // int nrrw_assignment=2.9;

    // cout<<bike_count<<endl;
    // cout<<nrrw_assignment<<endl;

    unsigned int value {4};
    // unsigned int value1 {-5};// Compiler error
    cout<<value<<endl;
    cout<<sizeof( long int)<< " bytes"<<endl;
    cout<<sizeof(signed long long int)<< " bytes"<<endl;
    cout<<sizeof(unsigned long long int)<< " bytes"<<endl;


    return 0;
}