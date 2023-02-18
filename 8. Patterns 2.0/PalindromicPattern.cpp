//Program to print a palindromic pattern by taking a input.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int space=n;space>row;space--){
            cout<<"  ";
        }
        for(int num=row;num>=1;num--){
            cout<<num<<" ";
            if(num==1){
                for(int k=2;k<=row;k++){
                    cout<<k<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}