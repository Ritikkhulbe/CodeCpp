//Program to print pyramid with numbers starting with 1 in every row.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

