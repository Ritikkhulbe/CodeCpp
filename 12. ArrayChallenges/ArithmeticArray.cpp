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
    int length=1;
    int k=1;
    int diff = arr[0]-arr[1];
    int templen=1;
    while (k<n){
        if (arr[k]-arr[k-1]==diff){
            templen+=1;
        }else{
            diff=arr[k]-arr[k-1];
            templen=2;
        }
        if (templen>length){
            length=templen;
        }
        k++;
    }
    cout<<length<<endl;
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}