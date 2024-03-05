#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        top=-1;
        arr = new int [1000];
    }
    void push(int x){
        top++;
        arr[top]=x;
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(5);

    cout<<s.Top()<<endl;
}