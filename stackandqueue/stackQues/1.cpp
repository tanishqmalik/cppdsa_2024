// reverse a string

#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack <char> s;
    string str;

    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<"";
        s.pop();
    }
    cout<<endl;
}



