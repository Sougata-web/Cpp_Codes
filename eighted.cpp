#include<iostream>
using namespace std;

// const int val1 {33};
// constexpr int val2{34};
// int val{35};

// constinit int age=88;

// const constinit int age1  {val1};
// constinit int age2 {age1};


// const constinit double weight {33.33};

int main(){

    // cout<<age<<endl;
    // cout<<age1<<endl;
    // cout<<age2<<endl;

    // age =77;
    // cout<<age<<endl;

    // cout<<weight<<endl;

    // double price {45.6};
    // int units{10};

    // auto total_price= price * units;

    // cout<<total_price<<endl;
    // cout<<sizeof(total_price)<<endl;

    // int x;
    // double y{45.44};
    // x=y;
    // cout<<x<<endl;
    // cout<<"Size of x: "<<sizeof(x)<<endl;

    double x{12.5};
    double y{34.6};

    int sum=x+y;
    cout<<sum<<endl;
    cout<<sizeof(sum)<<endl;
    sum=static_cast<int>(x)+static_cast<int>(y);
    cout<<sum<<endl;
    cout<<sizeof(sum)<<endl;

    sum=static_cast<int>(x+y);
    cout<<sum<<endl;

    double PI {3.14};

    int int_pi=static_cast<int>(PI);
    cout<<PI<<endl;
    cout<<int_pi<<endl;
    
    return 0;
}