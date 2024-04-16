
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
    

//     int hash[1000]={0};
    
//     for(int i=0; i<limit; i++){
//         hash[arr[i]]++;
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
// }


// for string


// #include <iostream>
// #include <map>
// using namespace std;


// int main(){
//     string str;
//     getline(cin,str);


//     int hash[1000]={0};

//     for(int i=0; i<str.length(); i++){
//         hash[str[i]-'a']++; 
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         char ch;
//         cin>>ch;

//         cout<<hash[ch-'a']<<endl;
//     }
// }