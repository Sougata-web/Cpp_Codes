#include<iostream>
using namespace std;

class Array{
    private:
    int *arr;
    int n;
    public:
    Array(){
        n=0;
    }
    Array(int);
    void show_data();
};

Array::Array(int num){
    n=num;
    arr=new int[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void Array::show_data(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    Array arr(size);
    arr.show_data();
    
    return 0;
}