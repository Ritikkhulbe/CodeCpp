//WAF to print all prime number between 2 numbers
#include <iostream>
#include <math.h>
using namespace std;

int prime(int n1,int n2){
    for(int i=n1;i<n2;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count = count + 1;
            }
        }
        if (count==0){
            cout<<i<<endl;
        }
   }
}
int main(){
    
    int a;
    cout<<"Enter one number: "<<endl;
    cin>>a;

    int b;
    cout<<"Enter another number: "<<endl;
    cin>>b;

    cout<<prime(a,b)<<endl;

    return 0;
}