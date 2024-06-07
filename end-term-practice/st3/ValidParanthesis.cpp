#include <iostream>
#include <stack>

using namespace std;

int main(){
    string temp;
    cin>>temp;
    stack<char> st;

    bool isbalanced= true;
    for(int i=0; i<temp.length(); i++){
        char ch = temp[i];

        if(ch=='(' || ch=='{' || ch=='[' ){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top = st.top();
                
                if( (ch=='}' && top=='{') || (ch==']' && top =='[') || ch==')' && top=='('){
                    st.pop();
                }
                else{
                    isbalanced=false;
                    break;
                }
            }
            else{
                isbalanced=false;
                break;
            }
        }
    }

    if(st.empty() && isbalanced){
        cout<<"okay"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}