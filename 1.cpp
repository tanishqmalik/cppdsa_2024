// #include <iostream>
// using namespace std;

// int main(){
//     int arr[100];
//     int i,j;
//     int limit;
//     cin>>limit;

//     for(i=0; i<limit; i++){
//         cin>>arr[i];
//     }

//     for(i=limit-1; i>=0; i--){
//         cout<<arr[i]<< " ";
//     }

// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    int i,j;
    cin>>limit;

    for (i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit-1; i++){
        for(j=i+1; j<limit+1; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(i=0; i<limit; i++){
        cout<<arr[i]<<endl;
    }
}