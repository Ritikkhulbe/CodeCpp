#include <iostream>
using namespace std;

int power(int n, int p){
    if (p == 1){
        return n;
    }
    int prev = power(n,p-1);
    return n*prev;
}

int main(){
    int n,p;
    cin >> n >> p;
    cout<<power(n,p)<<endl;
}