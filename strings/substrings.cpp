#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    getline(cin,s1);

    int i,j;

    int size = s1.size();


    for(i=0; i<size; i++){
        string temp;
        for(j=i; j<size; j++){
            temp.push_back(s1[j]);
            cout<<temp<<endl;
        }
    }
}