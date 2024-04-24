#include<iostream>
#include<vector>
#include<array>
using namespace std;

// template <typename T>
// void print_collection( const T & collection){
//     auto it=collection.begin();
//     cout<<" [";
//     while(it != collection.end()){
//         cout<<" "<<*it;
//         ++it;
//     }
//     cout<<"]"<<endl;
// }


// template <typename T>
// void print_collection(const T& collection , size_t begin_adjustment,
//                                     size_t end_adjustment){
//     //Adjudt begining and end
//     auto start_point = collection.begin() + begin_adjustment;
//     auto  end_point = collection.end() - end_adjustment;
    
//     std::cout << " [";
//     while(start_point != end_point){
//         std::cout << " " << *start_point ;
//         ++start_point;
//     }
//     std::cout << "]" << std::endl;
// }


    template <typename T>
void print_collection(const T& collection){
    
    auto it = collection.begin();
    
    std::cout << " [";
    while(it != collection.end()){
        std::cout << " " << *it ;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main(){

    // std::vector<int> ints1{ 11,22,33,44 };
    // std::array<int,4> ints2 {100,200,300,400};

    // std::vector<int>::iterator it_begin = ints1.begin();
    // std::vector<int>::iterator it_end = ints1.end();

    // std::cout << std::boolalpha;
    // std::cout << "first elt : " << *it_begin << std::endl;
    // std::cout << "it == end_it : " << (it_begin == it_end) << std::endl;

    // ++it_begin;
    // std::cout << "second elt : " << *it_begin << std::endl;
    // std::cout << "it == end_it : " << (it_begin == it_end) << std::endl;

    // ++it_begin;
    // std::cout << "third elt : " << *it_begin << std::endl;
    // std::cout << "it == end_it : " << (it_begin == it_end) << std::endl;

    // ++it_begin;
    // std::cout << "fourth elt : " << *it_begin << std::endl;
    // std::cout << "it == end_it : " << (it_begin == it_end) << std::endl;


    // ++it_begin;
    // std::cout << "junk elt : " << *it_begin << std::endl;
    // std::cout << "it == end_it : " << (it_begin == it_end) << std::endl;//true


    // std::cout << "--------" << std::endl;
    // std::cout << "ints1 : " ;
    // print_collection(ints1);

    // std::cout << "ints2 :";
    // print_collection(ints2);

    //  std::vector<int> ints1{ 11,22,33,44,55,66,77 };
    // std::array<int,6> ints2 {100,200,300,400,500,600};

    // print_collection(ints1,1,5);
    // print_collection(ints2,1,1);

    // vector<int> numbers{1,2,3,4,5,6,7,8,9,10};

    // vector<int> ::reverse_iterator it = numbers.rbegin();

    // *it = 34;
    // cout<<"Numbers : [";
    // while(it != numbers.rend()){
    //     cout<<" "<<*it;
    //     ++it;
    // }
    // cout<<"]"<<endl;

    // std::vector<int> numbers{ 11,22,33,44,55,66,77};

    // std::cout << "numbers : ";
    // print_collection(numbers);

    // std::cout << "numbers : ";
    // print_collection(numbers);

    // std::cout << "-------" << std::endl;

    // //std::vector<int>::const_iterator c_it = numbers.cbegin();
    // auto c_it = numbers.cbegin();
    // while( c_it != numbers.end()){
    //    // *c_it = 100;
    //     ++c_it;
    // }


    // //Constant reverse iterators
    // auto it1 = numbers.crbegin();
    // //std::vector<int>::const_reverse_iterator it1= numbers.crbegin();

    // while(it1 != numbers.crend()){
    //   //*it1 = 600; // Compiler error, it1 is a const iterator, we can't modify 
    //                 // container data through it.
    //   ++it1;
    // }

    int vi[] {1,2,3,4,5,6,7,8,9};

   std::cout << "--------" << std::endl;

    std::cout << " Collection : " ;
    for(auto it = std::begin(vi); it!= std::end(vi); ++it){
        std::cout << *it  << " ";
    }
  

    

        
    return 0;
}