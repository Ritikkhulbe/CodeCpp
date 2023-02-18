//Program to reverse the given number , e.g. 1234 into 4321
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number you want to reverse : ";
    cin>>n;

    int revNum=0;

    for(int i=n;i>0;){
        revNum = revNum*10 + (i%10);
        i = i/10;
    }
    cout<<revNum;
    return 0;
}