//change element to max till ith term
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements you want in the array:"<<endl;
    cin>>n;

    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i = 0;i<n;i++){
        int tempsum=0;
        for (int j=i;j<n;j++){
            tempsum = tempsum + arr[j];
            sum = tempsum+sum;
            cout<<tempsum<<" ";
        }
    }
    cout<<endl;
    cout<<"Sum of all subarray is :"<<sum;
    return 0;
}