//To calculate the nCr value of given numebrs.
#include <iostream>
using namespace std;

int nCr(int n,int r){
    int num1=1,num2=1,num3=1;
    for(int i=1;i<=n;i++){
        num1 = num1 * i;
    }
    for(int j=1;j<=r;j++){
        num2*=j;
    }
    for(int k=1;k<=(n-r);k++){
        num3*=k;
    }
    int sum1 = (num1/(num2*num3));
    return sum1;

}

int main(){

    int n;
    cout<<"Enter the value for n!"<<endl;
    cin>>n;

    int r;
    cout<<"Enter the value for r!"<<endl;
    cin>>r;

    cout<<nCr(n,r)<<endl;

    return 0;
}