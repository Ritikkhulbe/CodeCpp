//Program to check if an alphabet is a vowel or a consonant.
#include <iostream>
using namespace std;

int main(){
    
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;
    
    int lower,upper;
    lower = (c == 'a' || c == 'e' || c== 'i' || c== 'o' || c== 'u');
    upper = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(lower||upper){
        cout<<c<<" is a vowel."<<endl;
    }else{
        cout<<c<<" is a consonant."<<endl;
    }
}
