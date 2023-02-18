#include "bits/stdc++.h"
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    const int N = 1e6+1;
    int idx[N];
    for (int i=0; i<N; i++){
        idx[i] = -1;
    }
    int min=19999;
    for (int i=0;i<n;i++){
        if (idx[arr[i]]!=-1){
            if (min>idx[arr[i]]){
                min = idx[arr[i]];
            }
            idx[arr[i]] = i;
        }
    }
    cout<<min<<endl;
    return 0;
}