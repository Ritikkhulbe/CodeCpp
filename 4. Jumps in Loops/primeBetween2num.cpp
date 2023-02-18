//Program to print all prime numbers between 2 numbers
#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a number : ";
    cin>>a;

    int b;
    cout<<"Enter another number : ";
    cin>>b;

    int m,n;
    if(a>b){
        m=a;
        n=b;
    }else{
        m=b;
        n=a;
    }
    int i;
    int count=0;
    int tp=0;
    n=n+1;
    cout<<"Prime numbers between "<< a << " and "<<b<<" are : ";
    while(n<m){
        
        for(i=2;i<n;i++){
            if(n%i==0){
                count += 1;
                break;
            }else{
                continue;
            }
        }    
        if(count==0){
            cout<<n<<", ";
            tp += 1;
        }
        count=0;
        n=n+1;
    }
    if(tp==0){
        cout<<"there were no prime numbers found between "<<a << " and "<<b<<endl;
    }
    return 0;
}