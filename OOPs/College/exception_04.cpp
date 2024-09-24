#include<iostream>
using namespace std;

class demo{

};

int main(){

    try{
        throw demo();
    }catch( demo d){
        cout<<"Caught exception from demo class!!"<<endl;
    }
    
    return 0;
}