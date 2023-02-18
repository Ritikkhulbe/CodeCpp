//Program to print FLoyd's Pyramid , i.e half pyramid using natural number.
#include <iostream>
using namespace std;

int main(){

    int n,num;
    cout<<"Enter number of layer you want in your pyramid : ";
    cin>>n;
    num=0;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<++num<<" ";;
        }
        cout<<endl;
    }

    return 0;
}