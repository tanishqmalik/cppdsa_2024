// #include <iostream>
// using namespace std;

// int main(){
//     int arr[1000];
//     int limit;
//     cin>>limit;

//     for(int i=0; i<limit; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<limit; i++){
//         for(int j=0; j<limit; j++){
//             if(arr[i]<arr[j]){
//                 int temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0; i<limit; i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr;
//     int limit;
//     cin>>limit;
//     int num1;
//     for(int i=0; i<limit; i++){
//         cin>>num1;
//         arr.push_back(num1);
//     }

//     sort(arr.begin(), arr.end());

//     for(int i=0; i<limit; i++){
//         cout<<arr[i]<<" ";
//     }
// }