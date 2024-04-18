#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // const size_t COUNT{100};

    // for(size_t i{0} ; i < COUNT ; ++i){
    //     std::cout << i << " : I love C++" << std::endl;
    // }
    // std::cout << "Loop done!" << std::endl;

    // for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
    //     std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    // }

    // int increment {5};
    // int number1 {10};
    // int number2 {20};
    // int number3 {25};
    // int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    // std::cout << "number1 : " << number1 << std::endl; // 60
    // std::cout << "number2 : " << number2 << std::endl; // 20
    // std::cout << "number3 : " << number3 << std::endl; // 33
    // std::cout << "result : " <<  result << std::endl; // 33
   


   
    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration
	
    
    // for(size_t i {0} ; i < 10 ; ++i){
    //     std::cout << "value : " << bag_of_values[i] << std::endl;
    // }
    
	

    
    // for (int value : bag_of_values){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }
    


   //Specify the collection in place
   
    // for (int value : {1,2,3,4,5,6,7,8,9,10}){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }

    //Auto type deduction
	// for (auto value : {1,2,3,4,5,6,7,8,9,10}){
    //     //value holds a copy of the current iteration in the whole bag
    //     std::cout << " value : " << value << std::endl;
    // }

    // const size_t count{100};
    // size_t i{0};

    // while(i<count){
    //     cout<<i<<"alavu"<<endl;
    //     ++i;
    // }

    // cout<<"Loop done"<<endl;


    // const int COUNT{0};
    // size_t i{0}; // Iterator declaration

    // do{
    //     std::cout << i << " : I love C++" << std::endl;
    //     ++i; // Incrementation
    // }while( i < COUNT);

    // std::cout << "Loop done!" << std::endl;

    // size_t i{0};

    // do{
    //     std::cout << i  << " : I love C++" << std::endl;
    //     ++i;
    // }while(true);

    // char operation; // +,-,*,/
    // double operand1;
    // double operand2;
    // bool end {false};
    
    // std::cout << "Welcome to Awesome Calculator"<< std::endl;
    
    // while((end == false)){
	// 	//Do some processing
    //     std::cout << "--------------------------------------------" << std::endl;
    //     std::cout << "What operation do you want help with? " << std::endl;
    //     std::cout << "+,-,* and / are supported. Please choose one and type below"<< std::endl;
    //     std::cout << "Your operation : ";
    //     std::cin >> operation;
        
    //     std::cout << std::endl;
    //     std::cout << "Please type in your two operands separated by a space and hit enter: ";
    //     std::cin >> operand1 >> operand2;
    //     std::cout <<std::endl;
        
	// 	switch(operation){
    //     case '+' : 
    //         std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
    //         break;
    //     case '-' : 
    //         std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
    //         break;
    //     case '*' : 
    //         std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
    //         break;
    //     case '/' : 
    //         std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
    //         break;
    //     default :
    //         std::cout << operation << " operation not supported" << std::endl;
    //         break;
	// 	}
	
		
    //     std::cout << "Continue ? ( Y | N) : ";
        
    //     char go_on;
    //     std::cin >> go_on;
        
    //     //end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
        
    //     //You could also write the previous statement using if else
    //     if((go_on == 'Y') || (go_on == 'y')){
    //         end = false;
    //     }else{
    //         end = true;
    //     }
    // }
    
    // std::cout << "Done helping out. BYE!" << std::endl;
   
   //Setw on numbers before you print them
	// const size_t ROWS {12}; 
	// const size_t COLS {3};

    // std::cout << std::endl;
	// std::cout << "Tabular data visualization with nested do while loops : " << std::endl;
	
    // size_t row = 0;
    // size_t col = 0;
    
    // do { // row
    
    //     do {
	// 		std::cout  << "( row " << std::setw(2) <<  row << ",col "<< std::setw(2) <<  col << ")   ";
    //         ++col;
    //     }while(col < COLS);
        
    //     std::cout << std::endl;
    //     col = 0 ; 	// Reset col to 0 to allow printing from col 0 . col is in main
	// 				// function local scope now.
    //     ++row;
    // }while(row < ROWS);

//     size_t i{0};

//   do{
//       if(i==5){
//             ++i;
//             continue;
//        }

//      if(i==11)
//         break;


//         std::cout << "i : " << i << std::endl;
//         ++i;

//   }while(i <20);

    

	// char operation; // +,-,*,/
    // double operand1;
    // double operand2;
    // bool end {false};
    
    // std::cout << "Welcome to Awesome Calculator"<< std::endl;
    
    // while((end == false)){
	// 	//Do some processing
    //     std::cout << "--------------------------------------------" << std::endl;
    //     std::cout << "What operation do you want help with? " << std::endl;
    //     std::cout << "+,-,* and / are supported. Please choose one and type below"<< std::endl;
    //     std::cout << "Your operation : ";
    //     std::cin >> operation;

    //     if( (operation != '+') &&  
    //         (operation != '-') &&
    //         (operation != '*') &&
    //         (operation != '/')){
    //             std::cout << "operation " << operation << " NOT SUPPORTED!" << std::endl;
    //             continue;

    //         }
        
    //     std::cout << std::endl;
    //     std::cout << "Please type in your two operands separated by a space and hit enter: ";
    //     std::cin >> operand1 >> operand2;
    //     std::cout <<std::endl;
        
	// 	switch(operation){
    //     case '+' : 
    //         std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
    //         break;
    //     case '-' : 
    //         std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
    //         break;
    //     case '*' : 
    //         std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
    //         break;
    //     case '/' : 
    //         std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
    //         break;
    //     default :
    //         std::cout << operation << " operation not supported" << std::endl;
    //         break;
	// 	}
	
		
    //     std::cout << "Continue ? ( Y | N) : ";
        
    //     char go_on;
    //     std::cin >> go_on;
        
    //     //end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
        
    //     //You could also write the previous statement using if else
    //     if((go_on == 'Y') || (go_on == 'y')){
    //         end = false;
    //     }else{
    //         end = true;
    //     }
    // }
    
    // std::cout << "Done helping out. BYE!" << std::endl;
    
    for(double multiplier{4}; auto i : {1,2,3,4,5,6,7,8,9,10}){
        std::cout << "result : " << ( i * multiplier) << std::endl;
    }

    return 0;
}