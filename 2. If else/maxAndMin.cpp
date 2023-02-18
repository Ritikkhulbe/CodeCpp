//Program to find maximum, minimum among two numbers.
#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter first number : ";
    cin>>a;

    int b;
    cout<<"Enter Second number : ";
    cin>>b;

    int max,min;

    if(a>b){
        max=a;
        min=b;
    } else{
        max=b;
        min=a;
    }
    
    cout<<"The maximum number is "<<max<<endl;
    cout<<"The minimum number is "<<min<<endl;

    return 0;
}