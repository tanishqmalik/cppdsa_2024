// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     string str = "]{}()";

//     stack<char> s;

//     bool isBalanced= true;

//     for(int i=0; i<str.length(); i++){
//         char ch= str[i];

//         if(ch=='(' || ch=='[' || ch == '{'){
//             s.push(ch);
//         }

//         else{
//             if(!s.empty()){
//                 char top = s.top();

//                 if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
//                     s.pop();
//                 }

//                 else{
//                     isBalanced=false;
//                     break;

//                 }
//             }
//             else{
//                 isBalanced=false;
//                 break;

//             }
//         }
//     }

//     if(isBalanced && s.empty()){
//         cout<<"okay"<<endl;
//     }
//     else{
//         cout<<"not"<<endl;
//     }
    
// }



#include <iostream>
#include <stack>

using namespace std;

int main(){
    string temp="(){}";
    stack<char> st;

    bool isbalanced= true;

    for(int i=0; i<temp.length(); i++){
        char ch= temp[i];

        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top =st.top();
    
                if( (ch=='}' && top=='{')|| (ch==')' && top=='(' ) || (ch==']' && top=='[') ){
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

    if(isbalanced && st.empty()){
        cout<<"okay"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}