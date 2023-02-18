#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in array :"<<endl;
    cin>>n;
    int temp;

    int arr[n];
    for (int i=0;i < n;i++){
        cin>>arr[i];
    }
    cout<<"The given arraylist is :"<<endl;
    for (int k=0;k<n;k++){
        cout<<arr[k]<<", ";
    }
    for (int i=n;i>1;i--){
        for (int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<endl;
        cout<<"The given arraylist after sorting "<<i+1<<"times"<<endl;
        for (int k=0;k<n;k++){
            cout<<arr[k]<<", ";
        }
    }
    
    cout<<endl;
    return 0;
}