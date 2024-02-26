#include <iostream>
using namespace std;

int main(){
    string playlist;
    getline(cin, playlist);

    string search;

    getline(cin, search);

    string temp;
    int temp1=0;

    for(int i=0; i<playlist.length(); i++){
        if(search[i]==playlist[i]){
            // temp=search;
            if(playlist[i-1]!=' ' && playlist[i+1]==' '){
                temp1=0;
            }
            if(playlist[i+1]==' ' && playlist[i-1]==' '){
                temp1++;
            }
        }
    }

    // cout<<temp<<endl;
    cout<<temp1<<endl;
}