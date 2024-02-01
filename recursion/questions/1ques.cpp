// print name 5 times

#include <iostream>
using namespace std;

void print(string s,int n,int i){
    // int i;
    if(i>n){
        return;
    }
    cout<<s<<endl;
    i++;
    print(s,n,i);
}

int main(){
    int i=1;
    string s;
    cout<<"enter the name"<<endl;
    getline(cin, s);
    cout<<"enter number of times u want to print the name"<<endl;
    int n;
    cin>>n;
    cout<<"output:-"<<endl;
    print(s,n,i);
}
