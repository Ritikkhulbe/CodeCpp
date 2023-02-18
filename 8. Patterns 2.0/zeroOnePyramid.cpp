//Program to print half pyramid by zero and one starting with 1.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of layers you want in the pyramid : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            if(i%2!=0 && k%2!=0){
                cout<<1<<" ";
            } else if(k%2==0 && i%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}