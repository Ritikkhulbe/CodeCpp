//To find the greatest number between 3 numbers
#include <iostream>
using namespace std;


int main(){
    int a;
    cout<<"Type First Number : ";
    cin>>a;

    int b;
    cout<<"Type Second Number : ";
    cin>>b;

    int c;
    cout<<"Type Third Number : ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"The Maximum Number in the given three Numbers is "<<a;
        }else{
            cout<<"The Maximum Number in the given three Numbers is "<<c;
        }
    }else{
        if(b>c){
            cout<<"The Maximum Number in the given three Numbers is "<<b;
        }else{
            cout<<"The Maximum Number in the given three Numbers is "<<c;
        }
    }
    return 0;
}