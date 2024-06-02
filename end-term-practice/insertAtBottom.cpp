#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> st,int ts,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int target = st.top();
    st.pop();

    insertMiddle(st,ts,ele);

    st.push(temp);
    
}


int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int ts= st.size();

    int ele;
    cin>>ele;

    insertBottom(st,ts,ele);


    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}