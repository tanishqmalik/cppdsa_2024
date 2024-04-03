// #include <iostream>
// using namespace std;

// class Stack{
//     int arr[5];
//     int top;

//     public:
//     Stack(){
//         top=-1;
//     }
//     void Push(int x){
//         top++;
//         arr[top]=x;
//     }
//     void Pop(){
//         top--;
//     }

//     void isempty(){
//         if(top==-1){
//             cout<<"empty"<<endl;
//         }
//         else{
//             cout<<"not empty"<<endl;
//         }
//     }


//     int Top(){
//         return arr[top];
//     }

//     int Size(){
//         return top+1;
//     }
// };

// int main(){
//     Stack s;
//     s.Push(6);
//     s.Push(5);

//     cout<<s.Size()<<endl;
//     cout<<s.Top()<<endl;

//     s.isempty();
// }

#include <iostream>
using namespace std;
class Stack{
    int* arr;
    int top;
    int size;

    public:
    Stack(){
        top=-1;
        size=5;
        arr= new int[size];
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
    int Size(){
        return top+1;
    }
};

int main(){
    Stack s;
    s.Push(3);
    s.Push(4);

    cout<<s.Top()<<endl;
}