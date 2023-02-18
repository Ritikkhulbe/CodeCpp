//Program to print different message on different button.
#include <iostream>
using namespace std;

int main(){

    char button;
    cout<<"Press a button (a/b/c/d/e) : ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Ciao"<<endl;
        break;
    case 'd':
        cout<<"Salut"<<endl;
        break;
    case 'e':
        cout<<"Namaste"<<endl;
        break;
    default:
        cout<<"I'm Still learning more!"<<endl;
        break;
    }
    

    return 0;
}