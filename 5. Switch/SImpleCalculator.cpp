//Program to implement a simple calculator using switch
#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a number : ";
    cin>>a;

    int b;
    cout<<"Enter another number : ";
    cin>>b;

    char op;
    cout<<"Enter an operator (+ or - or * or / or %) : ";
    cin>>op;

    int cal;
    int err=0;

    switch (op)
    {
    case '*':
        cal=a*b;
        break;
    case '+':
        cal=a+b;
        break;
    case '-':
        cal=a-b;
        break;
    case '/':
        cal=a/b;
        break;
    case '%':
        cal=a%b;
        break;
    
    default:
        cout<<"Error!!!";
        err=1;
        break;
    }
    if(err==0){
        cout<<cal;
    }
    return 0;
}