// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;


//     vector <int> vec;
//     for(int i=0; i<n; i++){
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }


//     for(int num: vec){
//         cout<<num<<" ";
//     }
//     cout<<endl;
// }


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <int>vec;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }

    for(int num:vec){
        cout<<num<<" ";
    }

    cout<<endl;
}