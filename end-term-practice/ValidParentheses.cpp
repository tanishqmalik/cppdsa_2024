#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>q;
    string s = "{[()]}";

    for(int i=0; i<q.size(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            q.push(s[i]);
        }
        else{
            if(q.empty()){
                cout<<"false"<<endl;
            }
        }
    }
}