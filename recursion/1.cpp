#include <iostream>
using namespace std;

void print(int x){


    // base function
    if(x==4){
        return;
    }
    cout<<x<<endl;
    x++;
    print(x);
}

int main(){
    int x;
    cin>>x;
    print(x);
}