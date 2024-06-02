#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <char> st;

    string type;

    cin>>type;

    for(int i=0; i<type.length(); i++){
        char type1 = type[i];
        st.push(type1);
    }

    while(!st.empty()){
        char ch = st.top();
        st.pop();
        cout<<ch<<"";
    }
    cout<<endl;
}