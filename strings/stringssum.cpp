// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str1;
//     getline(cin, str1);
//     string str2;
//     getline(cin, str2);
    
//     // int size1 = str1.size();
//     // int size2 = str2.size();

//     long s1 = stoi(str1);
//     long s2=stoi(str2);

//     int sum = s1+s2;

//     string sum_str= to_string(sum);

//     cout << s1+s2<<endl;


// }

// wap to find no. of occurence of the char in the string given by user


#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    char temp;
    cin>>temp;

    int count;


    for(int i=0; i<s.size(); i++){
        if(temp == s[i]){
            count++;
        }
    }

    cout << count-1<<endl;


}


