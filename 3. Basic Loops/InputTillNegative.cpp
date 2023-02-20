//Taking input till the user inputs a negative integer.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0){
        cout<<"Your number is : "<<n<<endl;
        cout<<"Enter another number : ";
        cin>>n;
    }
    cout<<"you have entered "<<n<<" which is a negative number!"<<endl;
    return 0;
}