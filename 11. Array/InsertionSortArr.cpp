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
    for (int i=1;i<=n;i++){
        temp = arr[i];
        int j = i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;


        cout<<endl;
        cout<<"The given arraylist after sorting "<<i+1<<"times"<<endl;
        for (int k=0;k<n;k++){
            cout<<arr[k]<<", ";
        }
    }
    
    cout<<endl;
    return 0;
}