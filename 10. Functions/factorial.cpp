//WAF to print factorial of a number
#include <iostream>
using namespace std;

int fact(int a){
    for(int i=a-1;i>=1;i--){
        a = a*i;
    }
    return a;

}

int main(){
    
    int n;
    cout<<"Enter the number for which you want to find the factorial"<<endl;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}