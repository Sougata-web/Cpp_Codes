#include<iostream>
using namespace std;

class numbers{
    private:
        int x;
    public:
        numbers(int i){
            x=i;
        }
        void show_data(){
            cout<<"x: "<<x<<endl;;
        }
};

int main(){
    numbers n(10);
    n.show_data();
    
    return 0;
}