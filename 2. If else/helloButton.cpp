//Program to print different message on different button.
#include <iostream>
using namespace std;

int main(){

    char button;
    cout<<"Press a button (a/b/c/d/e) : ";
    cin>>button;

    if(button=='a'){
        cout<<"Hello"<<endl;
    }else if(button=='b'){
        cout<<"Hola"<<endl;
    }else if(button=='c'){
        cout<<"Ciao"<<endl;
    }else if(button=='d'){
        cout<<"Salut"<<endl;
    }else if(button=='e'){
        cout<<"Namaste"<<endl;
    }else{
        cout<<"Im still learning";
    }
    return 0;
}