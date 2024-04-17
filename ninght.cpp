#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;

const unsigned char mask_bit_0 {0b00000001} ;//Bit0
const unsigned char mask_bit_1 {0b00000010} ;//Bit1
const unsigned char mask_bit_2 {0b00000100} ;//Bit2
const unsigned char mask_bit_3 {0b00001000} ;//Bit3
const unsigned char mask_bit_4 {0b00010000} ;//Bit4
const unsigned char mask_bit_5 {0b00100000} ;//Bit5
const unsigned char mask_bit_6 {0b01000000} ;//Bit6
const unsigned char mask_bit_7 {0b10000000} ;//Bit7

void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3,
      bool flag4, bool flag5, bool flag6, bool flag7){
          
    std::cout << "Flag0 is : " << flag0 << ", do something with it." <<  std::endl;
    std::cout << "Flag1 is : " << flag1 << ", do something with it."<<  std::endl;
    std::cout << "Flag2 is : " << flag2 << ", do something with it." <<  std::endl;
    std::cout << "Flag3 is : " << flag3 << ", do something with it."<<  std::endl;
    std::cout << "Flag4 is : " << flag4 << ", do something with it."<<  std::endl;
    std::cout << "Flag5 is : " << flag5 << ", do something with it."<<  std::endl;
    std::cout << "Flag6 is : " << flag6 << ", do something with it."<<  std::endl;
    std::cout << "Flag7 is : " << flag7 << ", do something with it."<<  std::endl;
    }

    void use_options_v1(unsigned char flags){
   
    std::cout << "bit0 is " << ((flags & mask_bit_0) >> 0 ) << ", do something with it!"<< std::endl;
    std::cout << "bit1 is " << ((flags & mask_bit_1) >> 1 ) <<", do something with it!"<< std::endl;
    std::cout << "bit2 is " << ((flags & mask_bit_2) >> 2 ) <<", do something with it!"<< std::endl;
    std::cout << "bit3 is " << ((flags & mask_bit_3) >> 3 ) <<", do something with it!"<< std::endl;
    std::cout << "bit4 is " << ((flags & mask_bit_4) >> 4 ) <<", do something with it!"<< std::endl;
    std::cout << "bit5 is " << ((flags & mask_bit_5) >> 5 ) <<", do something with it!"<< std::endl;
    std::cout << "bit6 is " << ((flags & mask_bit_6) >> 6 ) <<", do something with it!"<< std::endl;
    std::cout << "bit7 is " << ((flags & mask_bit_7) >> 7 ) <<", do something with it!"<< std::endl;    
}




int main(){
    // const int COLUMN_WIDTH{20};

	// unsigned char sandbox_var{0b00110100}; 

    // sandbox_var |= 0b00001111;

    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    // sandbox_var &=0b00000000;
    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    // sandbox_var ^=0b00000011;
    // cout<<setw(COLUMN_WIDTH)<<bitset<8>(sandbox_var)<<endl;

    // const unsigned char mask_bit_0 {0b00000001} ;//Bit0
    // const unsigned char mask_bit_1 {0b00000010} ;//Bit1
    // const unsigned char mask_bit_2 {0b00000100} ;//Bit2
    // const unsigned char mask_bit_3 {0b00001000} ;//Bit3
    // const unsigned char mask_bit_4 {0b00010000} ;//Bit4
    // const unsigned char mask_bit_5 {0b00100000} ;//Bit5
    // const unsigned char mask_bit_6 {0b01000000} ;//Bit6
    // const unsigned char mask_bit_7 {0b10000000} ;//Bit7

    //  unsigned char var {0b00000000};// Starts off all bits off
    
    // std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    
	// std::cout << "Setting bit in position 1" << std::endl;
	// var |= mask_bit_1;
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // std::cout << "Setting bit in position 5" << std::endl;
	// var |= mask_bit_5;
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    //      std::cout << "Resetting bit in position 1" << std::endl;
    // var &= (~mask_bit_1);
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	
	// std::cout << "Resetting bit in position 1" << std::endl;
    // var &= (~mask_bit_5);
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // cout<<"Setting all bits "<<endl;
    // var |= (mask_bit_0 | mask_bit_1 | mask_bit_2| mask_bit_3 | mask_bit_4 |mask_bit_5 | mask_bit_6 |mask_bit_7);

    // cout<<setw(COLUMN_WIDTH)<< "var: "<<bitset<8>(var)<<endl;

    // //Check state of a bit
	// std::cout << std::endl;
	// std::cout << "Checking the state of each bit position (on/off)" << std::endl;
	// std::cout << "bit0 is " << ((var & mask_bit_0) >> 0 )<< std::endl;
    // std::cout << "bit1 is " << ((var & mask_bit_1) >> 1 ) << std::endl;
    // std::cout << "bit2 is " << ((var & mask_bit_2) >> 2 ) << std::endl;
    // std::cout << "bit3 is " << ((var & mask_bit_3) >> 3 ) << std::endl;
    // std::cout << "bit4 is " << ((var & mask_bit_4) >> 4 ) << std::endl;
    // std::cout << "bit5 is " << ((var & mask_bit_5) >> 5 ) << std::endl;
	// std::cout << std::boolalpha;
    // std::cout << "bit6 is " << ((var & mask_bit_6) >> 6 ) << std::endl;
	// std::cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << std::endl;

    // std::cout << "bit7 is " << ((var & mask_bit_7) >> 7 ) << std::endl;
    // std::cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << std::endl;

    // //Toggle bits
	// //Toggle : var ^ mask
	
	// //Toggle bit 0
	// std::cout << std::endl;
	// std::cout << "Toggle bit 0" << std::endl;
    // var ^= mask_bit_0;
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // //Toggle bit7 
	// std::cout << "Toggle bit 7" << std::endl;
    // var ^= mask_bit_7;
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	// //Toggle multiple bits in one go : the 4 higher bits
	// std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
    // var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
	// std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
	// 	 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // use_options_v0(0,0,1,1,1,0,1,0);

    // std::cout << "----------------------" << std::endl;
	// use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);

    const unsigned int red_mask{0xFF000000};
    const unsigned int green_mask{0x00FF0000};
    const unsigned int blue_mask{0x0000FF00};
    const unsigned int alpha_mask{0x000000FF};

    unsigned int my_color{0xAABCDE00};

    cout<<dec<<showbase<<endl;

    cout<<"Red is: "<<((my_color & red_mask)>>24)<<endl;
    cout<<"Green is: "<<((my_color & green_mask)>>16)<<endl;
    cout<<"Blue is: "<<((my_color & blue_mask)>>8)<<endl;
    cout<<"Alpha is: "<<((my_color & alpha_mask)>>0)<<endl;


    
    return 0;
}