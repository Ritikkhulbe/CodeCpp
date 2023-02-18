//WAF to print fibenacci series
#include <iostream>
using namespace std;

void fib(int a){

    int t1 = 0;
    int t2=1;
    int nt;
    
    cout<<t1<<" ";
    for(int i=1;i<a;i++){
        cout<<t2<<" ";
        nt = t1 + t2;
        t1=t2;
        t2=nt;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter number of terms you want in your series"<<endl;
    cin>>n;

    fib(n);

    return 0;
}