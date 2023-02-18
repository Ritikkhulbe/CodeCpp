//Program to add only positive numbers.
#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Enter a number : ";
    cin>>n;

    int sum;
    sum=0;
    
    char ans;
    ans = 'y';

    while(n>=0 && ans=='y'){
        sum += n;
        cout <<"Do you want to add more number to the sum ('y' or 'n'): ";
        cin>>ans;
        if(ans=='y'){
            cout <<"Enter another number : ";
            cin>>n;
        }else{
            cout<<"Stopping code..."<<endl;
            cout<<"Printing Output..."<<endl;
        }
    }
    if(n<0){
        cout<<"Number you entered is a negative number : "<<n<<endl;
        cout<<"Stopping code..."<<endl;
        cout<<"Printing Output..."<<endl;
    }
    cout<<"Sum of all numbers you entered : "<<sum;
    return 0;
}