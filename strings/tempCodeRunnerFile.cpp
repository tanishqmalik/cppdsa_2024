#include <iostream> 



using namespace std;
int main(){
    string s;
    getline(cin, s);

    int size = s.size();

    for(int i=0; i<size; i++){
        if(i==0 || s[i-1]==' '){
            s[i]=toupper(s[i]);
        }
    }
    for (int i=0; i<size; i++){
        cout<< s[i]<<endl;
    }
}