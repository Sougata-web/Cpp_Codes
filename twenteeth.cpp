#include<iostream>
using namespace std;

// class Dog
// {

// public:
// Dog()=default;
//     Dog(string_view name_param, string_view breed_param, int age_param);
//     ~Dog();

//     void print_info(){
//         cout<<"Dog ("<<this << ")[name: "<<name << " breed : "<<breed<<" age : "<<*p_age<<"]"<<endl;
//     }

//     Dog* set_dog_name(std::string_view name){
//             //name = name; // This does nothing
//             this->name = name;
//             return this;
//         }
//         Dog* set_dog_breed(std::string_view breed){
//             this->breed = breed;
//             return this;
//         }

//         Dog* set_dog_age(int age){
//             *(this->p_age) = age;
//             return this;
//         }

//         private : 
//         std::string name;
//         std::string breed;
//         int * p_age{nullptr};
// };

// Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
//     name = name_param;
//     breed = breed_param;
//     p_age = new int;
//     *p_age = age_param;
//     std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
// }

// Dog::~Dog(){
//     delete p_age;
//     std::cout << "Dog destructor called for " << name << " at " << this <<  std::endl;
// }


// class Dog{
//     public:
//         string m_name;
// };

// struct Cat{
//     public:
//         string m_name;
// };

// struct Point{
//     double x;
//     double y;
// };
// void print_point(const Point & point){
//     cout<<"Point [ x: "<<point.x<<", y : "<<point.y<<"]"<<endl;
// }

// class Dog{
//     public : 
//      Dog() = default;
//      void prin_info(){

//      }
//      void do_something(){

//      }

//      private :
//       size_t leg_count; //8
//       size_t arm_count; //8
//       int * p_age; // 8
// };


int main(){

    // Dog dog1("Fluffy","Shepherd",2); //Constructor
    // dog1.print_info();

    // dog1.set_dog_name("Pumba");
    // dog1.set_dog_breed("Wire Fox Terrier");
    // dog1.set_dog_age(4);
    

    // //Chained calls using pointers
    // dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);
    // dog1.print_info();

    // Dog dog1;
    // Cat cat1;

    // dog1.m_name="Fluffy";
    // cat1.m_name="Juny";

    // std::cout << dog1.m_name << std::endl;
    // std::cout << cat1.m_name << std::endl;


    // Point point1;
    // point1.x = 10;
    // point1.y = 55.5;

    // print_point(point1);

    // point1.x = 40.4;
    // point1.y = 2.7;
    // print_point(point1);

    // Dog dog1;
    // std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    // std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    // std::cout << "sizeof(Dog) : " << sizeof(dog1) << std::endl;

    // std::string name{"I am the king of the universe!"};

    // std::cout << "sizeof(name) : " << sizeof(name) << std::endl;

//     int int_data{33};
//     double double_data{55};

//     //References
//     int& ref_int_data{int_data};
//     double& ref_double_data{double_data};

//     std::cout << "int_data : " << int_data << std::endl;
//     std::cout << "&int_data : " << &int_data << std::endl;
//     std::cout << "double_data : " << double_data << std::endl;
//     std::cout << "&double_data : " << &double_data << std::endl;

//     std::cout << "=======================" << std::endl;

//     std::cout << "ref_int_data : " << ref_int_data << std::endl;
//     std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
//     std::cout << "ref_double_data : " << ref_double_data << std::endl;
//     std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

//     int_data = 111;
//     double_data = 67.2;


//     //Print stuff out
//     std::cout << std::endl;
//     std::cout << "int_data : " << int_data << std::endl;
//     std::cout << "&int_data : " << &int_data << std::endl;
//     std::cout << "double_data : " << double_data << std::endl;
//     std::cout << "&double_data : " << &double_data << std::endl;

//     std::cout << "=======================" << std::endl;

//     std::cout << "ref_int_data : " << ref_int_data << std::endl;
//     std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
//     std::cout << "ref_double_data : " << ref_double_data << std::endl;
//     std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

//     ref_int_data = 1012;
//     ref_double_data = 1000.45;


//    //Print stuff out
//     std::cout << std::endl;
//     std::cout << "int_data : " << int_data << std::endl;
//     std::cout << "&int_data : " << &int_data << std::endl;
//     std::cout << "double_data : " << double_data << std::endl;
//     std::cout << "&double_data : " << &double_data << std::endl;

//     std::cout << "=======================" << std::endl;

//     std::cout << "ref_int_data : " << ref_int_data << std::endl;
//     std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
//     std::cout << "ref_double_data : " << ref_double_data << std::endl;
//     std::cout << "&ref_double_data : " << &ref_double_data << std::endl;

    // double double_value {12.34};
    // double& ref_double_value {double_value}; // Reference to double_value
    // double* p_double_value {&double_value}; //Pointer to double_value
	
	// //Reading
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;
    // cout<<endl;
    // *p_double_value = 15.44;
	
    // std::cout << std::endl;
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;

    // cout<<endl;
    // ref_double_value = 18.44;
	
    // std::cout << std::endl;
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //  double some_other_double{78.45};

    // //Make the reference reference something else.
    // ref_double_value = some_other_double;

    // std::cout << "Making the reference reference something else..." << std::endl;
    // std::cout << std::endl;
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;



    // //Make the pointer point to something else
    // p_double_value = &some_other_double;
    // std::cout << "Making the pointer point somewhere else..." << std::endl;
    // std::cout << std::endl;
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
    // std::cout << "&double_value : " << &double_value << std::endl;
    // std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;


    // *p_double_value = 555.5;

    // std::cout << std::endl;
	// std::cout << "double_value : " << double_value << std::endl;
	// std::cout << "ref_double_value : " << ref_double_value << std::endl;
    // std::cout << "&double_value : " << &double_value << std::endl;
    // std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	// std::cout << "p_double_value : " << p_double_value << std::endl;
	// std::cout << "*p_double_value : " << *p_double_value << std::endl;


    // std::cout << std::endl;
	// std::cout << "Non const reference : " << std::endl;
	// int age {27};
	// const int& ref_age{age};
	// std::cout << "age : " << age << std::endl;
	// std::cout << "ref_age : " << ref_age << std::endl;
	
	
	// //Can modify original variable through reference

	// std::cout << std::endl;
	// std::cout << "Modify original variable through reference : " << std::endl;
	
	// ref_age++; //Mofify through reference
	
	// std::cout << "age : " << age << std::endl;
	// std::cout << "ref_age : " << ref_age << std::endl;
    
    //Simulating reference behavior with pointers
//    const int * const p_age {&age};
//    *p_age = 45;

    
    int scores[] {1,2,3,4,5,6,7,8,9,10};
    
    //Printing positions
    std::cout << std::endl;
	
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;


   for ( auto& score : scores){
        score = score * 10;
    }

    //Printing after change
     std::cout << std::endl;
	std::cout << "Scores : ";
    for ( auto score : scores){
        std::cout << " " << score ;
    }
	std::cout << std::endl;
    return 0;
}