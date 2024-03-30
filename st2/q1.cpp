#include <iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stack<char> s;
    string result;

    for(char c: str){
        s.push(c);

        if(!s.empty() && s.top()==c){
            s.pop();
        }
        else{
            s.push(c);
        }
    }

    while(!s.empty()){
        result=result+s.top();
        s.pop();
    }

    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]==s[i+1]){

    //     }
    // }

    // for(int i=0; i<s.size()-1; i++){
    //     if(s[i]==one && s[i+1]==two){
    //         continue;
    //     }
    //     else{
    //         result=s[i]+result;
    //     }
    // }
    cout<<result<<endl;
}