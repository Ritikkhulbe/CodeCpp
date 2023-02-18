//Program to print half pyramid after 180 degree rotation
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int i=n-1;i>=0;i--){
        for(int k=0;k<=i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n-1;j++){
        cout<<"*";}
        cout<<endl;
    }

    return 0;
}