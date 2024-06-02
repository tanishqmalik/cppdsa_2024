#include <iostream>
// #include <cctype>
using namespace std;

int main(){
    string temp;
    cin>>temp;

    for(char &ch : temp){
        if(isupper(ch)){
            ch=tolower(ch);
        }
        else if(islower(ch)){
            ch=toupper(ch);
        }
    }

    cout<<temp<<endl;
}