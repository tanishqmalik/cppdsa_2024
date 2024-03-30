#include <iostream>
using namespace std;

class Stack{
    int arr[5];
    int top;

    public:
    Stack(){
        top=-1;
    }
    void Push(int x){
        top++;
        arr[top]=x;
    }
    void Pop(){
        top--;
    }
    void isempty(){
        if(top==-1){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"not empty"<<endl;
        }
    }


    int Top(){
        return arr[top];
    }

    int Size(){
        return top+1;
    }
};

int main(){
    Stack s;
    // s.Push(6);
    // s.Push(5);

    cout<<s.Size()<<endl;

    s.isempty();
}