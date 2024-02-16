// #include <iostream>
// using namespace std;

// int main(){
//     int arr[1000];
//     int limit;
//     cin>>limit;
//     int i;

//     for(i=0; i<limit; i++){
//         cin>>arr[i];
//     }

//     // int position;
//     // cin>>position;

//     for(i=0; i<limit; i++){
//         arr[i]=arr[i+1];
//     }

//     // arr[position]=arr[position-1];

//     for(i=0;i<limit-1; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }





#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;
    int i;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    int position;
    cin>>position;

    for(i=position; i<limit-1; i++){
        arr[i]=arr[i+1];
    }


    for(i=0;i<limit-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


