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
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int num = 0;
    if (arr[0]>arr[1]){
        num+=1;
    }
    int m=arr[0];
    for (int i=1;i<n-1;i++){
        if (arr[i]>m ){
            if (arr[i]>arr[i+1]){
                num+=1;
            }
            m = arr[i];
        }
    }
    if (arr[n-1]>m){
        num+=1;
    }

    cout<<num<<endl;
    return 0;
}