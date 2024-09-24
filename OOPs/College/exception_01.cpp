#include<iostream>
#include<stdexcept>
using namespace std;

int main(){

    try{
        int numerator =100;
        int denominator=0;
        int res;

        if(denominator == 0){
            throw runtime_error("Division by 0 not allowed!");
        }

        res=numerator/denominator;
        cout<<"Result after division: "<<res;
    }catch( const exception &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
    
    return 0;
}