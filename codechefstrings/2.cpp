// Wordle

#include <iostream>
using namespace std;

int main(){
    string s;
    string t;

    cin>>s;
    cin>>t;

    for(int i=0; i<5; i++){
        if(s[i]==t[i]){
            cout<<"G";
        }
        else{
            cout<<"B";
        }
    }
}


// #include <iostream>
// using namespace std;

// int main() {
// 	int loop;
// 	cin>>loop;
	
// 	while(loop--){
// 	    char s[5];
// 	    char t[5];
// 	    cin>>s;
// 	    cin>>t;
	    
// 	    for(int i=0; i<5; i++){
// 	        if(s[i]==t[i]){
// 	            cout<<"G";
// 	        }
// 	        else if(s[i]!=t[i]){
// 	            cout<<"B";
// 	        }
// 	    }
// 	    cout<<endl;
// 	}
	

// }