#include <iostream>
using namespace std;
int SearchKey(int arr[], int n, int key){
    for (int i=0;i<n;i++){
        if (key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    int arr[n];

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<SearchKey(arr,n,key)<<endl;
    return 0;
}