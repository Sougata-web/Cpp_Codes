#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;

int main(){
    const int COLUMN_WIDTH{20};

	// unsigned char sandbox_var{0b00110100}; 

    // sandbox_var |= 0b00001111;

    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    // sandbox_var &=0b00000000;
    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    // sandbox_var ^=0b00000011;
    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    const unsigned char mask_bit_0 {0b00000001} ;//Bit0
    const unsigned char mask_bit_1 {0b00000010} ;//Bit1
    const unsigned char mask_bit_2 {0b00000100} ;//Bit2
    const unsigned char mask_bit_3 {0b00001000} ;//Bit3
    const unsigned char mask_bit_4 {0b00010000} ;//Bit4
    const unsigned char mask_bit_5 {0b00100000} ;//Bit5
    const unsigned char mask_bit_6 {0b01000000} ;//Bit6
    const unsigned char mask_bit_7 {0b10000000} ;//Bit7

     unsigned char var {0b00000000};// Starts off all bits off
    
    std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    
	std::cout << "Setting bit in position 1" << std::endl;
	var |= mask_bit_1;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    std::cout << "Setting bit in position 5" << std::endl;
	var |= mask_bit_5;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    
    return 0;
}