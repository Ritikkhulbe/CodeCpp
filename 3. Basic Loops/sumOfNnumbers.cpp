//To print sum of all the numbers till n
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number for sum of all the numbers till the number : ";
    cin>>n;

    int sum=0;
    int i=1;
    for(i;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum of all the numbers till "<<n<<" is "<<sum<<endl;

    return 0;
} 