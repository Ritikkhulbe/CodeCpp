//To print hello world 
#include <iostream>
using namespace std;

class Ritik{
    public:
    int getint(){
        int n;
        cin>>n;
        return n;
    }
    string getstr(){
        string n;
        cin>>n;
        return n;
    }
    int getzero(){
        for(int i=0;i<100;i++){
            continue;
        }
        return 0;
    }
};
int main(){
    Ritik r;
    
}