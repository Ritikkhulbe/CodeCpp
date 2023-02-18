//Program to check if a triangle is scalene, isosceles or equilateral.
#include <iostream>
using namespace std;

int main(){
    int sidea,sideb,sidec;

    cout<<"Enter length of first side : ";
    cin>>sidea;

    cout<<"Enter length of second side : ";
    cin>>sideb;

    cout<<"Enter length of third side : ";
    cin>>sidec;

    if(sidea==sideb){
        if(sidea==sidec){
            cout<<"Its is an Equilateral triangle"<<endl;
        } else{
            cout<<"It is an Isosceles triangle"<<endl;
        }
    }else if(sidea==sidec || sideb==sidec){
        cout<<"It is an Isosceles triangle"<<endl;
    }else{
        cout<<"It is a Scalene triangle"<<endl;
    }
    return 0;
}