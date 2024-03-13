#include <iostream>
using namespace std;

int main(){
    char s[5];
    char t[5];

    cin>>s;
    cin>>t;

    for(int i=0; i<5; i++){
        if(s[i]==t[i]){
            cout<<"G";
        }
        else if(s[i]!=t[i]){
            cout<<"B";
        }
    }
}