//Program to print a rectangle pattern using number of rows and coloums specified by the user.
#include <iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter number of rows required : ";
    cin>>r;
    cout<<"Enter number of coloums required : ";
    cin>>c;

    for(int i=0;i<r;i++){
        for(int k=0;k<c;k++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}