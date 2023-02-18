//Program to print diamond pattern using stars and input given by the user.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int s=n;s>i;s--){
            cout<<"  ";
        }
        for(int stars=1;stars<=i;stars++){
            cout<<"* ";
        }
        for(int k=2;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int s=n;s>i;s--){
            cout<<"  ";
        }
        for(int stars=1;stars<=i;stars++){
            cout<<"* ";
        }
        for(int k=2;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}