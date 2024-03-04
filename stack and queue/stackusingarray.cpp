#include <iostream>
using namespace std;

class stack{

    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
}