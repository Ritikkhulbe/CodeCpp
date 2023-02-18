//Neha can only go out on odd days and she can only go out when she has some money saved from her pocket money
#include <iostream>
using namespace std;

int main(){

    int pocketMoney;
    pocketMoney = 3000;

    for(int date=1;date<=31;date++){
        if(date%2==0){
            continue;
        }
        if(pocketMoney==0){
            cout<<"You have no money left!"<<endl;
            break;
        }
        cout<<"Today the date is "<<date<<" september."<<endl;
        cout<<"You can go out today!!!Yaaayyyy!!!"<<endl;
        pocketMoney -= 300;
    }


    return 0;
}