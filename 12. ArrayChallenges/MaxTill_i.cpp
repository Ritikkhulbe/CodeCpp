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
    for (int i= 1;i<n;i++){
        if (arr[i]<arr[i-1]){
            arr[i]=arr[i-1];
        }
    }
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}