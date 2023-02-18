//Program to print butterfly pattern
#include <iostream>
using namespace std;

int main(){

    int n,num;
    cout<<"Enter number of layer you want in the butterfly pattern : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<" *";
        }
        num = 2*n - 2*i;
        for(int j=1;j<=num;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int k=1;k<=i;k++){
            cout<<" *";
        }
        num = 2*n - 2*i;
        for(int j=1;j<=num;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}