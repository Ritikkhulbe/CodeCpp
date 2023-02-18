//Program to print a inverted half pyramid of size as big as user wants.
#include <iostream>
using namespace std;

int main(){

    int n,sav;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;
    sav=n;

    for(int i=0;i<n;i++){
        for(int k=sav;k>0;k--){
            cout<<" *";
        }
        cout<<endl;
        sav -=1;
    }

    return 0;
}