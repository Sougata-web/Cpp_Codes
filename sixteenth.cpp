#include<iostream>
#include<vector>
#include <experimental/array>
#include <array>
using namespace std;

// template <typename T>
// void print_vec( const vector<T>& vec){
//     for( size_t i{};i<vec.size();i++){
//         cout<<vec[i]<<endl;
//     }
//     cout<<endl;
// }

// template <typename T>
// void print_raw_array(const T* p, std::size_t size)
// {
//     std::cout << "data = ";
//     for (std::size_t i = 0; i < size; ++i)
//         std::cout << p[i] << ' ';
//     std::cout << std::endl;
// }

template <typename T, size_t Size>
void print_array(const array<T,Size>& arr){
    for( size_t i{};i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template <typename T>
void print_raw_array(const T* p, std::size_t size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; ++i)
        std::cout << p[i] << ' ';
    std::cout << std::endl;
}

int main(){

    // vector<string> vec_str{"the ","sky "," is ","blue"," my"," friend"};


    // std::cout << "vec1[1]  : " << vec_str[1] << std::endl;
    // print_vec(vec_str);

    // // vector<int> ints1;
    // // cout<<" ints1: ";
    // // print_vec(ints1);

    //  std::vector<int> ints2 = { 1,2,3,4 };
    // std::vector<int> ints3{ 11,22,33,44 };
    
    // std::cout << "ints2 : ";
    // print_vec(ints2);

    // std::cout << "ints3 : ";
    // print_vec(ints3);

    //  std::vector<int> ints4(20, 55); // A vector with 20 items, all initialized to 55
    // std::cout << "ints4 : ";
    // print_vec(ints4);
    
    // //Be careful about uniform initialization
    // std::vector<int> ints5{20, 55}; // A vector with 2 items : 20 and 55
    // std::cout << "ints5 : ";
    // print_vec(ints5);

    // cout<<vec_str[2]<<endl;
    // cout<<vec_str.at(3)<<endl;
    // cout<<vec_str.front()<<endl;
    // cout<<vec_str.back()<<endl;

    // std::cout << "using raw array : " << std::endl;
    // print_raw_array(vec_str.data(),vec_str.size());

    // vector<int> ints1;

    // std::cout << std::endl;
    // std::cout << "Adding and removing stuff : " << std::endl;
    
    // std::cout << "ints1 : " ;
    // print_vec(ints1);
    
    
    // //Pushing back
    // ints1.push_back(100);
    // ints1.push_back(200);
    // ints1.push_back(300);
    // ints1.push_back(500);
    // std::cout << "ints1 : " ;
    // print_vec(ints1);
    
    // //Poping back
    // ints1.pop_back();
    // std::cout << "ints1 : " ;
    // print_vec(ints1);

    std::array<int, 3> int_array1; // Will contain junk by default
    std::array<int, 3> int_array2{ 1,2 }; // Will contain 1,2,0
    std::array<int, 3> int_array3{}; // Will contain 0 0 0
    std::array int_array4{ 1,2 };

    auto int_array6 = std::experimental::make_array(1, 2, 3, 4, 5);

    std::cout << "int_array1 : " ;
    print_array(int_array1);
    
    std::cout << "int_array2 : " ;
    print_array(int_array2);
    
    std::cout << "int_array3 : " ;
    print_array(int_array3);
    
    std::cout << "int_array4 : " ;
    print_array(int_array4);
    
    std::cout << "int_array6 : " ;
    print_array(int_array6);

    std::cout << std::endl;
    std::cout << "Filling the array : " << std::endl;
    int_array1.fill(321);
    int_array4.fill(200);
    std::cout << "int_array1 : " ;
    print_array(int_array1);
    std::cout << "int_array4 : " ;
    print_array(int_array4);


    //Accessing elements
    std::cout << std::endl;
    std::cout << "Accessing elements in an array: " << std::endl;
    std::cout << "int_array2[0] : " << int_array2[0] << std::endl;
    std::cout << "int_array2.at(1) : " << int_array2.at(1) << std::endl;
    std::cout << "int_array2.front() : " << int_array2.front() << std::endl;
    std::cout << "int_array2.back() : " << int_array2.back() << std::endl;
    //data method
    print_raw_array(int_array2.data(),int_array2.size());




    
    return 0;
}