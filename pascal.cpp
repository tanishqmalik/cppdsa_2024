#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int r,c;
    cin>>r;
    int res=1;
        for(int i=0; i<r; i++){
            res = res*(r-i);
            res=res/i+1;
            cout<< res<<" ";
        }
    cout<<endl;
}