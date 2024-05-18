#include<iostream>
using namespace std;

class GFG{
    public:
        void call_function(){
            print();
        }
        void print(){
            cout << "Printing the Base class Content" << endl;
        }
};

class GFG2: public GFG{
    public:
        void print(){
            cout << "Printing the Base class Content" << endl;
        }
};


int main(){

    GFG geeksforgeeks;
    geeksforgeeks.call_function();
    GFG2 geeksforgeeks2;
    geeksforgeeks2.call_function();
    
    return 0;
}