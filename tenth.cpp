#include<iostream>
using namespace std;

// const int Pen{ 10 }; 
// const int Marker{ 20 };
// const int Eraser{ 30 };
// const int Rectangle{ 40 };
// const int Circle{ 50 };
// const int Ellipse{ 60 };


// bool car() {
//     std::cout << "car function running" << std::endl;
//     return false;
// }

// bool house() {
//     std::cout << "house function running" << std::endl;
//     return true;
// }
// bool job() {
//     std::cout << "job function running" << std::endl;
//     return false;
// }
// bool spouse() {
//     std::cout << "spouse function running" << std::endl;
//     return false;
// }


    int global_var {44};
int main(){
    // bool red =false;
    // bool green{true};
    // bool police_stop{true};

    // if(green && !police_stop){
    //     cout<<"Go "<<endl;
    // }else{
    //     cout<<"Stop "<<endl;
    // }


    // int tool {Eraser};

    // if (tool == Pen) {
    //     std::cout << "Active tool is pen" << std::endl;
    //     //Do the actual painting
    // }
    // else if (tool == Marker) {
    //     std::cout << "Active tool is Marker" << std::endl;
    // }
    // else if (tool == Eraser) {
    //     std::cout << "Active tool is Eraser" << std::endl;
    // }
    // else if (tool == Rectangle) {
    //     std::cout << "Active tool is Rectangle" << std::endl;
    // }
    // else if (tool == Circle) {
    //     std::cout << "Active tool is Circle" << std::endl;
    // }
    // else if (tool == Ellipse) {
    //     std::cout << "Active tool is Ellipse" << std::endl;
    // }

    // std::cout << "Moving on" << std::endl;

    // int tool {Eraser};

    // switch (tool)
    // {
    //     case Pen : {
    //          std::cout << "Active tool is Pen" << std::endl;
    //     }
    //     break;

    //     case Marker : {
    //          std::cout << "Active tool is Marker" << std::endl;
    //     }
    //     break;


    //     case Eraser :
    //     case Rectangle : 
    //     case Circle : {
    //          std::cout << "Drawing Shapes" << std::endl;
    //     }
    //     break;

    //     case Ellipse : {
    //          std::cout << "Active tool is Ellipse" << std::endl;
    //     }
    //     break;
    
    //     default: {
    //         std::cout << "No match found" << std::endl;
    //     }
    //         break;
    // }

    // std::cout << "Moving on" << std::endl;

    //  if (car() || house() ||job() || spouse()) {
    //     std::cout << "I am happy" << std::endl;
    // }
    // else {
    //     std::cout << "I am sad" << std::endl;
    // }

    // int condition {-5};
    // int condition {0};

    // bool bool_condition = condition;
    // std::cout << std::boolalpha;


    // if(bool_condition){
    //     std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    // }else
    // {
    //     std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    // }

    // int max{};
    
    // int a{35};
    // int b{200};
	
    // std::cout << std::endl;

    
    // max = (a > b)? a : b; // Ternary operator
	
    // std::cout << "max : " << max << std::endl;


    // bool go {true};
    // if(int speed{10};go){
    //     std::cout << "speed : " << speed << std::endl;
		
	// 	if(speed > 5){
	// 		std::cout << "Slow down!" << std::endl;
	// 	}else{
	// 		std::cout << "All good!" << std::endl;
	// 	}
	// }else{
    //     std::cout << "speed : " << speed << std::endl;
	// 	std::cout << "Stop" << std::endl;
	// }

    //  bool green {false};

    // global_var++; // 45

    // if(green){
    //     global_var++; 
    //     int car_count{23};
    //     std::cout << "Light is green " << car_count << "on the move!" << std::endl;
    // }else{
    //     //car_count++; // Compiler error
    //     global_var++; // 46
    //     std::cout << "Light is not green. Y'all should STOP!" << std::endl;
    // }

    // //car_count++;
    // std::cout << "global_var : " << global_var << std::endl;

    int condition{0};

    int my_var{4};

    switch (int data{7}; condition)
    {
        //int x{9}; // Never going to run
        int x;
    case 0 :

        //int y {5};
        int y;
        x = 6;
        x++;
        //z =6;
        std::cout << "x : " << x << std::endl;
        std::cout << "Statement1" << std::endl;
        std::cout << "Statement2" << std::endl;
        break;

    case 1 : 
        int z;
        my_var++;
        y = 5;
        std::cout << "y : " << y << std::endl;
        std::cout << "Statement3" << std::endl;
        std::cout << "Statement4" << std::endl;
        break;
    
    default:
        int u;
        z = 10;
        std::cout << "Statement5" << std::endl;
        std::cout << "Statement6" << std::endl;
        break;
    }
    std::cout << "Moving on..." << std::endl;

    return 0;
}