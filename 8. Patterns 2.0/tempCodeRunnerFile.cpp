//Program to print inverted half pyramid by numbers starting with 1 to n in the first layer
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int i=n;i>0;i--){
        for(int k=1;k<=i;k++){
            cout<<k<<' ';
        }
        cout<<endl;
    }

    return 0;
}