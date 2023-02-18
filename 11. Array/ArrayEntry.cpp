//WAP to get an arrayList from user and print max and min number in it
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in array :"<<endl;
    cin>>n;

    int arr[n];
    for (int i=0;i < n;i++){
        cin>>arr[i];
    }
    cout<<"The given arraylist is :"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    int max=arr[0],min=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"the max number is the list is: "<<max<<endl;
    cout<<"the min number is the list is: "<<min<<endl;
    return 0;
}