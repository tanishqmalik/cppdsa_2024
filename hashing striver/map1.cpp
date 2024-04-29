
// for integer

// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     int arr[1000];
//     int limit;
//     cin>>limit;

//     for(int i=0; i<limit; i++){
//         cin>>arr[i];
//     }

//     map<int ,int> mpp;
//     for(int i=0; i<limit; i++){
//         mpp[arr[i]]++;
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         int number;
//         cin>>number;

//         cout<<mpp[number]<<endl;
//     }
// }

// for string 

// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     string s;
//     getline(cin, s);

//     map<char ,int> mpp;
//     for(int i=0; i<s.length(); i++){
//         mpp[s[i]-'a']++;
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         char ch;
//         cin>>ch;

//         cout<<mpp[ch-'a']<<endl;
//     }
// }

// map time complexity - o(logn)
// unordered map time complexity - o(1) best and average case , o(n) worst case




