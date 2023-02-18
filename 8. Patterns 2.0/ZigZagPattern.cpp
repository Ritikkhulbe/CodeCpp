//Program to print zigzag pattern using stars and input given by the user.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of stars you want is the pattern : ";
    cin>>n;

    for(int row=1;row<=3;row++){
        for(int k=1;k<=n;k++){
            if(((row+k)%4==0) || (row==2 && k%4==0)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}