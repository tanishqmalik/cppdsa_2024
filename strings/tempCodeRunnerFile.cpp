#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char find;
    cin>>find;
    int temp;

    int size= s.size();

    for(int i=0; i<size; i++){
        if(find==s[i]){
            temp=i;
        }
    }
    cout << temp<<endl;
}
