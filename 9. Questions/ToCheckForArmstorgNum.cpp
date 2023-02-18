//Program to check whether a number is an armstrong Number or not
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int storedN=n;
    int num=0;

    while(n>0){
        int ld=n%10;
        num += pow(ld,3);
        n=n/10;
    }
    if(num==storedN){
        cout<<"It is an armstrong number.";
    }
    else{
        cout<<"It is not an armstrong number. ";
    }
    cout<<num;
    return 0;
}