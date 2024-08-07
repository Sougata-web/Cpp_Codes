#include<iostream>
using namespace std;
class Numbers{
    private:
    int x;
    public:
    Numbers(Numbers & N){
        x=N.x;
    }
    Numbers(int i){
        x=i;
    }
    void show_data(){
        cout<<"x: "<<x<<endl;;
    }

};
int main(){
    Numbers N1(10);
    Numbers N2(N1);
    N1.show_data();
    N2.show_data();
    
    return 0;
}