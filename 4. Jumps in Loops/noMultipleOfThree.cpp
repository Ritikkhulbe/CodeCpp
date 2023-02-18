//Program to print all numbers from zero to a given number without printing multiple of three and printing "!" instead
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to print the numbers till : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<"!"<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}