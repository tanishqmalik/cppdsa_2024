#include <iostream>
using namespace std;

int myPow(int x, int n){
    int i;
    if(i==n){
        return x;
    }
    i=i+1;
    x=x*myPow(x,n);;
    
}

int main(){
    int x=10;
    int n=4;
    int ans = myPow(x,n);
    cout<<ans<<endl;
}