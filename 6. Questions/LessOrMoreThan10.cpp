//Program to check whether a given number is less than,equal to or more than 10.
#include <iostream>
using namespace std;

int main(){

    float n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n<=10){
        if(n==10){
            cout<<"Given number is equal to 10.";
        }else{
            cout<<"Given number is less than 10.";
        }
    }else{
        cout<<"Given number is more than 10.";
    }
    return 0;
}