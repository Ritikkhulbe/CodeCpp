//Program to display multiplication table upto 10.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to print the table of : ";
    cin>>n;

    int ans,i;
    ans=n;
    i=1;
    for(i;i<11;i++) {
        ans=n*i;
        cout<<n<<" * "<<i<<" = "<<ans<<endl;
    }
    return 0;
}