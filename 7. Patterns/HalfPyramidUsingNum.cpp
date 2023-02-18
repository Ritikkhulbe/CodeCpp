//Program to print half pyramid using numbers denoting their row number
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layer you want in your pyramid : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}