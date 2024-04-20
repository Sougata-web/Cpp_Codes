// #include<iostream>
// #include<ctime>
// #include<cstdlib>
// using namespace std;

// int main(){
//     // int scores[10];

//     // for( size_t i{0};i<10;i++){
//     //     cin>>scores[i];
//     //     cout<<"Scores ["<<i<<"] :" <<scores[i]<<endl;
//     // }

//     // double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
// 	// for(size_t i{0}; i < 5; ++i){
// 	// 	std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
// 	// }

//     // int class_sizes[]{1,2,3,4,5,6,7,8,9};
//     // for(auto value:class_sizes){
//     //     cout<<"Values: "<<value<<endl;
//     // }

//     // int scores [] {2,5,8,2,5,6,9};
//     // int sum {0};
    
//     // for( int element : scores){
//     //     sum += element;
//     // }
//     // std::cout << "Score sum : " << sum << std::endl;

//     // int scores[]{1,2,3};
//     // int count{size(scores)};

//     // cout<<count<<endl;
//     // cout<<sizeof(scores)<<endl;

// //      int count {sizeof(scores)/sizeof(scores[0])};


// //     for(size_t i {0} ; i < count ; ++i){
// //         std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
// //     }
 

// //    //Range based for loop
// //     for ( auto i : scores){
// //             std::cout << "value  : " << i << std::endl;       
// //     }

//     // char message [6]{"Hello"};

//     // // cout<<message<<endl;

//     // std::cout << "message : ";
//     // for( auto c : message){
//     //     std::cout << c ;
//     // }
//     // std::cout << std::endl;

//     // message[1]='a';

//     // std::cout << "message : ";
//     // for( auto c : message){
//     //     std::cout << c ;
//     // // }
//     // char message1 [] {'H','e','l','l','o','\0'};
//     // std::cout << "message1 : " << message1 << std::endl;
//     // std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

//     //Can't safely print out arrays other than those of characters
//     // int numbers [] {1,2,3,4,5};
//     // std::cout << "numbers :  " << numbers << std::endl;
    
	

//     // int numbers[129] {1000};
// 	// std::cout << "numbers[129] : " << numbers[129] << std::endl;

//     // std::cout << "Program ending...." << std::endl;

//     // srand(time(0));

//     // int random_num=rand();
//     // // cout<<random_num<<endl;
//     // // random_num=rand();

//     // // cout<<random_num<<endl;
//     // for(size_t i{0};i<20;i++){
//     //     // random_num=rand();
//     //     random_num=rand()%11;
//     //     cout<<"Random num..{"<<i<<"}: "<<random_num<<endl;
//     // }

//     // int random_num = std::rand() % 10 + 1 ; // [1~10]
//     // for(size_t i {0} ; i < 20 ; ++i){
//     //     random_num = std::rand() % 10 + 1;
//     //     std::cout << "random_num " << i << "  :   " <<  random_num << std::endl; // 0 ~ RAND_MAX       
//     // }

//     // std::srand(std::time(0)); // Seed

//     // char prediction0[]{ "a lot of kinds running in the backyard!" };
//     // char prediction1[]{ "a lot of empty beer bootles on your work table." };
//     // char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
//     // char prediction3[]{ "you running away from something really scary" };
//     // char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
//     // char prediction5[]{ "dogs running around in a deserted empty city" };
//     // char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
//     // char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
//     // char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
//     // char prediction9[]{ "you laughing your lungs out. I've never seen this before." };

//     // bool end{ false };

//     // const int max_length{15};
//     // char name[max_length];

//     // std::cout << "What's your name dear :" << std::endl;
//     // cin.getline(name,max_length);

//     // while(!end){
//     //     cout<<"Oh dear "<<name<<" I, see";

//     //     size_t rand_num =static_cast<size_t>(rand()%11);

//     //     switch (rand_num)
//     //     {
//     //     case 0:
//     //         std::cout << prediction0 << std::endl;
//     //         break;
//     //     case 1:
//     //         std::cout << prediction1 << std::endl;
//     //         break;

//     //     case 2:
//     //         std::cout << prediction2 << std::endl;
//     //         break;
//     //     case 3:
//     //         std::cout << prediction3 << std::endl;
//     //         break;
//     //     case 4:
//     //         std::cout << prediction4 << std::endl;
//     //         break;
//     //     case 5:
//     //         std::cout << prediction5 << std::endl;
//     //         break;
//     //     case 6:
//     //         std::cout << prediction6 << std::endl;
//     //         break;
//     //     case 7:
//     //         std::cout << prediction7 << std::endl;
//     //         break;

//     //     case 8:
//     //         std::cout << prediction8 << std::endl;
//     //         break;

//     //     case 9:
//     //         std::cout << prediction9 << std::endl;
//     //         break;
//     //     default:
//     //         std::cout << ", huum, I don't see anything" << std::endl;
//     //     }
//     //      std::cout << "Do you want me to try again ? (Y | N) : ";

//     //     char go_on;
//     //     std::cin >> go_on;

//     //     end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

//     // }

//     // 2D array
//     // int packages[3][4];
//     //  int packages [] [4] {
//     //     {1,2,3,4},
//     //     {5,6,7,8},
//     //     {9,10,11,12},
//     //     {3,4,5,6}
//     // };

//     // for(size_t i{0} ; i < 3; ++ i){

//     //     for(size_t j{0}; j < 4 ; ++j){

//     //         std::cout << packages[i][j] << "   ";
//     //     }
//     //     std::cout << std::endl;

//     // }

//     // for(size_t i{0} ; i < std::size(packages); ++ i){

//     //     for(size_t j{0}; j < std::size(packages[i])  ; ++j){

//     //         std::cout << packages[i][j] << "   ";
//     //     }
//     //     std::cout << std::endl;
//     // }


//     // int house_block [7] [5] [3] {
//     //     {
//     //         {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
//     //     },
//     //     {
//     //         {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
//     //     },
//     //     {
//     //         { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
//     //     },
//     //     {
//     //          {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
//     //     },
//     //     {
//     //          {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
//     //     },
//     //     {
//     //         {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
//     //     },
//     //     {
//     //          {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
//     //     }
//     // };

//     // for(size_t i{0}; i < std::size(house_block) ; ++i){

//     //     for(size_t j{0} ; j < std::size(house_block[i]) ; ++j){

//     //         for(size_t k{0} ; k < std::size(house_block[i][j]) ; ++k){

//     //             std::cout << house_block[i][j][k] << "     ";
//     //         }
//     //     }
//     // }

//     // const size_t num_cols{3};
    
//     // int packages2 [] [5] {
//     //     {1,2,3},
//     //     {4,5,6},
//     //     {7,8,9},
//     //     {10,11,12},
// 	// 	{100,110,120} // Can add as many triplets in packages2 as we want
//     // };
    
// 	// std::cout << std::endl;
//     // std::cout << "Ommiting leftmost dimension for 2d array : " << std::endl;
//     // for (size_t i{0} ; i < std::size(packages2) ; ++i){
//     //     for( size_t j{0} ; j < std::size(packages2[i]) ; ++j){
//     //         std::cout << "Item (" << i << "," << j << ") : " << packages2[i][j] << std::endl;
//     //     }
//     // }

//     //  int house_block1 [] [5] [3] {
        
//     //     {
//     //         {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
//     //     },
//     //     {
//     //         {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
//     //     },
//     //     {
//     //         { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
//     //     },
//     //     {
//     //          {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
//     //     }
          
//     // };

// 	// for (size_t i {0} ; i < std::size(house_block1 ); ++i){
        
//     //     for( size_t j{0}; j < std::size(house_block1[i]) ; ++j){
            
// 	// 		std::cout << "[";
//     //         for( size_t k{0}; k < std::size(house_block1[i][j]) ; ++k){
                
//     //             std::cout << house_block1[i][j][k] << " ";
//     //         }
//     //         std::cout <<"] " ;//Separate elements for good visualization
//     //     }
//     //     std::cout << std::endl;//Separate elements for good visualization
//     // }

//     // const size_t name_length{15};
	
//     // char members [][name_length] {
//     //     {'J','o','h','n'},
//     //     {'S','a','m','u','e','l',},
//     //     {'R','a','s','h','i','d'},
//     //     {'R','o','d','r','i','g','e','z'}
//     // };

//     // std::cout << "Unsafe printing of members : " << std::endl;
//     // for (size_t i {0}; i < std::size(members) ; ++i){
//     //     std::cout << members[i] << std::endl;
//     // }

//     // std::cout << std::endl;
//     // std::cout << "Printing out character by character manually : " << std::endl;
//     // for (size_t i{0} ; i < std::size(members) ; ++i){
        
//     //     for (size_t j{0} ; j < std::size(members[i]) ; ++j){
            
//     //         std::cout << members[i][j] ;
//     //     }
//     //     std::cout << std::endl;
//     // }

//     // char members1 [][name_length] {
//     //     "John",
//     //     "Samuel",
//     //     "Rashid",
//     //     "Rodriguez"
//     // };
    
//     // //Printing out members1
//     // std::cout << "Printing out members1 (C-string literals) : " << std::endl;
//     // for (size_t i {0}; i < std::size(members1) ; ++i){
//     //     std::cout << members1[i] << std::endl;
//     // }

//     // char predictions [] [90] {
//     //     "a lot of kinds running in the backyard!",
//     //     "a lot of empty beer bootles on your work table.",
//     //     "you Partying too much with kids wearing weird clothes.",
//     //     "you running away from something really scary",
//     //     "clouds gathering in the sky and an army standing ready for war",
//     //     "dogs running around in a deserted empty city",
//     //     "a lot of cars stuck in a terrible traffic jam",
//     //     "you sitting in the dark typing lots of lines of code on your dirty computer",
//     //     "you yelling at your boss. And oh no! You get fired!",
//     //     "you laughing your lungs out. I've never seen this before." ,
//     //     "Uhm , I don't see anything!"
        
//     // };
    
// 	// std::cout << std::endl;
//     // std::cout << "Prediction : " << predictions[5] << std::endl;






//     return 0;
// }