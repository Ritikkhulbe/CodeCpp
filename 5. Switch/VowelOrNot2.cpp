//Program to find whether an alphabet is a vowel or a consonant.
#include <iostream>
using namespace std;

int main(){

    char a;
    cout<<"Enter your alphabet(in lowercase) : ";
    cin>>a;

    switch(a){
        case 'a':
            cout<<a<<" is a vowel.";
            break;
        case 'e':
            cout<<a<<" is a vowel.";
            break;
        case 'i':
            cout<<a<<" is a vowel.";
            break;
        case 'o':
            cout<<a<<" is a vowel.";
            break;
        case 'u':
            cout<<a<<" is a vowel.";
            break;
        default:
            cout<<a<<" is a consonant.";
            break;
    }

    return 0;
}