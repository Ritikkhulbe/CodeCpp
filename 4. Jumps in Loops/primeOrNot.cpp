//Program to check whether a number is prime or not
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int count=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is a non-prime number, one of its factor is "<<i;
            count += 1;
            break;
        }else{
            continue;
        }
    }
    if(count==0){
        cout<<n<<" is a prime number";
    }

    return 0;
}