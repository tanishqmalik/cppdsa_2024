// #include <iostream>
// using namespace std;

// int main(){
//     string s;
//     getline(cin,s);

//     int length=0;
//     int index=0;
    
//     while(s[index]!='\0'){
//         length++;
//         index++;
//     }

//     cout << length<<endl;
// }


#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int length=0;
    int index=0;

    while(s[index]!='\0'){
        length++;
        index++;
    }

    cout << length<<endl;
}

// wap to reverse 