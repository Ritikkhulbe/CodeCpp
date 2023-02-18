//Program to output whether a number is divisible by both 2 and 3 or divisible by only one of them.
#include <iostream>
using namespace std;

int main(){

    cout<<"To check whether the given number is divisible by 2 or 3."<<endl;

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<n<<" is divisible by both 2 and 3.";
    }else if(n%2==0 || n%3==0){
        if(n%2==0){
            cout<<n<<" is only divisible by 2";
        }else{
            cout<<n<<" is only divisible by 3";
        }
    }else{
        cout<<n<<" is not divisible by either of them.";
    }

    return 0;
}