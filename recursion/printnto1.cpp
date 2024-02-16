// Print N to 1 without loop

#include <iostream>
using namespace std;


void printreversenumber(int i, int n){
    cout<<n<<" ";
    if(i<n){
        n--;
        printreversenumber(i,n);
    }
}

int main(){
    int i, n;

    cin>>n;

    printreversenumber(i, n);
}