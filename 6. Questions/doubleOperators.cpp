//Calculation of operators (++) and (--)
#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    a=5;
    b=8;
        //5   //8   //10   //7
    c = a++ + b++ - ++b + ++a;

    cout<<a<<endl;//6 //7
    cout<<b<<endl;//9 //10
    cout<<c<<endl;//10

    return 0;
}