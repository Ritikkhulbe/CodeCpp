//To find if the number is odd or even
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    
    if(n%2==0){
        cout<<n<<" is an even number."<<endl;
    } else{
        cout<<n<< " is an odd number."<<endl;;
    }
    return 0;
}