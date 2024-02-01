// first and last position of an element in sorted array

// brute force
// my approach but its printing the last two same elemnts indexes for e.g input : - 4 4 4 4 then output:- 2 3. but it should give me 0 3


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[1000];
//     int limit;
//     cin>>limit;
//     int i,j;
//     int index=1;
//     int eletosearch;
//     int temp1,temp2;
    
//     cin>>eletosearch;

//     for(i=0; i<limit; i++){
//         cin>>arr[i];
//     }
    

//     for(i=0; i<limit; i++){
//         for(j=i+1; j<limit+1; j++){
//             if(arr[j]==arr[i]){
//                 if(eletosearch==arr[j]){
//                     temp1=i;
//                     temp2=j;
//                 }
//             }
//         }
//     }
//     // cout<<index<<endl;
//     cout << temp1<< temp2 <<endl;
// }

// final approach without binary search

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[10000];
//     int limit;
//     cin>>limit;
//     int i, j;

//     int find;
//     cin>>find;
//     int temp,temp1;

//     for(int i =0; i<limit; i++){
//         cin>>arr[i];
//     }

//     for(i=0; i<limit; i++){
//         if(arr[i]==find){
//             temp=i;
//         }
//     }

//     for(i=limit-1; i>=0; i--){
//         if(arr[i]==find){
//             temp1=i;
//         }
//     }

//     cout<<temp1<<temp<<endl;

// }



// by binary search

#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;

    cin>>limit;
    int i;

    int start =0;
    int end= limit -1;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    int find;
    cin>>find;

    int temp=-1;
    int temp1=-1;


    for(i=0; i<limit; i++){

        int mid=(start + end)/2;
        if(arr[mid]==find){
            temp=mid;
        }

        if(arr[mid]<find){
            start = mid+1;
        }

        else{
            end= mid-1;
        }
        mid=(start+end)/2;
    }

    cout<<temp<<endl;


    for(i=limit-1; i>=0; i--){
        int mid=(start + end)/2;
        if(arr[mid]==find){
            temp1=mid;
        }

        if(arr[mid]<find){
            start = mid+1;
        }

        else{
            end = mid-1;
        }
    }

    cout<<temp1<<endl;
}