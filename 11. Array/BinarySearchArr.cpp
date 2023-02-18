//Binary Search of index of element in the arraylist
#include <iostream>
using namespace std;
int SearchKey(int arr[], int n, int key){
    int s=0,e=n;
    while(s<e){
        int mid=e-s;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
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