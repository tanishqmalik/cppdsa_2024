// push pop size top peek isempty linear data structure  top=-1
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(20);
    st.push(30);
    st.push(40);

    // Loop until the stack is empty
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    // for(int i=0; i<st.size(); i++){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
}
