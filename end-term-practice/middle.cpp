#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> st, int ts){



    if(st.size()==ts/2+1){
        cout<<st.top()<<endl;
        return;
    }
    if(st.size()==0){
        cout<<"empty stack"<<endl;
        return;
    }

    int temp = st.top();
    st.pop();

    printMiddle(st,ts);

    //backtrack (piche jaate vakt stack mein elements bhardo)

    st.push(temp);
}



int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    st.push(60);
    st.push(80);
    st.push(90);

    int ts=st.size();

    printMiddle(st,ts);


    // for(int i=0; i<st.size(); i++){
    //     cout<<st.top()<<endl;
    // }
}