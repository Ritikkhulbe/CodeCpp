//Program to print a hollow rectangle
#include <iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter number of rows required : ";
    cin>>r;
    cout<<"Enter number of coloums required : ";
    cin>>c;

    int i=1;
    int k;

    for(i=1;i<=r;i++){
        for(k=1;k<=c;k++){
            if(i==1 || i==r){
                cout<<" *";
            }else{
                cout<<" *";
                for(int j=0;j<c;j++){
                    cout<<"  ";
                }
                cout<<" *";
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}