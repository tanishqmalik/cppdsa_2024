// stack using array

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack{
//     int *arr;
//     int top;

//     public:
//     Stack(){
//         top=-1;
//         arr=new int [1000];
//     }

//     void push(int x){
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         top--;
//     }

//     int Top(){
//         return arr[top];
//     }

//     int size(){
//         return top+1;
//     }
// };

// int main(){
//     Stack s;
//     s.push(4);
//     s.push(6);

//     // s.pop();
//     cout<<s.Top();
// }

#include <iostream>
#include <stack>
using namespace std;

class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        top=-1;
        arr= new int[1000];
    }

    void Push(int x){
        top++;
        arr[top]=x;
    }

    void Pop(){
        top--;
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
    s.Push(7);
    s.Push(6);
    cout<<s.Top();
    s.Pop();
    cout<<s.Top();
}