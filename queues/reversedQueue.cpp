#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    stack <int> s;
    int limit,num;
    cin>>limit;

    for(int i=0; i<limit; i++){
        cin>>num;
        q.push(num);
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element= s.top();
        s.pop();
        cout<<element<<" ";
    }
    cout<<endl;
}