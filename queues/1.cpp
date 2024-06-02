#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(11);
    q.push(45);
    q.push(67);

    cout<<"size "<< q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<"size "<< q.size()<<endl;

    if(q.empty()){
        cout<<"q empty"<<endl;
    }
    else{
        cout<<"q is not empty"<<endl;
    }
}