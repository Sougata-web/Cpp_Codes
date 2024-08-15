#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
        void deposit(int money){
            balance+=money;
        }
        void withdrawl(){
            cout<<"Enter the amount to be withdrawl: "<<endl;
            int withdraw;
            cin>>withdraw;
            balance-=withdraw;
        }

        void checkBalance(){
            cout<<"The balance is: "<<balance;
        }

};

int main(){

    Bank bn;
    bn.deposit(10000);
    bn.withdrawl();
    bn.checkBalance();
    
    return 0;
}