//To use if..elseif to print,things to do with your savings
#include <iostream>
using namespace std;

int main(){
    int sav;
    cout<<"How much saving do you have :";
    cin>>sav;

    if(sav>5000){
        if(sav>7000){
            cout<<"Go to a Roadtrip";
        }else{
            cout<<"Go Shopping";

        }
    } else if(sav>3000){
        cout<<"go out with friends";
    } else{
        cout<<"go to work, save up";
    }
    return 0;
}