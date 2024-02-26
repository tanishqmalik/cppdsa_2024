#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string result;
    
    string s1;

    for(int i=s.length(); i>=0; i--){
        if(s[i]!=' '){
            result=s[i]+result;
        }
    }
    cout<<result<<endl;
}