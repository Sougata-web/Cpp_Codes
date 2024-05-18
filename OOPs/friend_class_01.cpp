#include<iostream>
using namespace std;

class GFG{

    private:
        int private_variable;
    protected:
        int protected_variable;
    public:

        GFG(){
            private_variable=10;
            protected_variable=99;
        }
    friend class F;
};

class F{
    public:
        void display(GFG&t){
            cout<<"The protected Variable is: "<<t.protected_variable<<endl;
            cout<<"The private Variable is: "<<t.private_variable<<endl;
        }
};
int main(){
    GFG g;
    F fri;
    fri.display(g);
    
    return 0;
}