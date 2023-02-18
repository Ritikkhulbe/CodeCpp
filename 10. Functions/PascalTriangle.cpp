//WAP to print Pascal triangle.
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

int ans(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter the number rows you want in the Pascal Triangle"<<endl;
    cin>>n;
    cout<<ans(n)<<endl;

    return 0;
}