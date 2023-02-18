//Program to print odd integer till n.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"All the odd numbers uptill "<<n<<" are : "<<endl;

    int i=1;
    for(i;i<n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<", ";
    }
    return 0;
}