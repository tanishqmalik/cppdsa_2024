#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;

    int size;
    int num;
    
    int sum=0;

    cin>>size;
    for(int i=0; i<size; i++){
        cin>>num;
        arr.push_back(num);
    }

    for(int i=0; i<arr.size(); i++){
        sum=0;
        for(int j=i; j<i+3; j++){
            if(j<arr.size()){
                cout<<arr[j]<<" ";
                sum= sum+arr[j];
            }
        }
        cout<<"sum:-"<<sum;
        cout<<endl;  
    }
}


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>arr;
//     int size;
//     cin>>size;
//     int num;
    

//     for(int i=0; i<size; i++){
//         cin>>num;
//         arr.push_back(num);
//     }

//     int k;
//     cin>>k;


//     int i=0;  //start
//     int j=0;  //end

//     while(j<arr.size()){
//         if(j-i+1<k){
//             j++;
//         }
//         else if(j-i+1==k){
//             cout<<arr[i]<<arr[j]<<" ";
//         }
//     }
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// void printSubarrays(const vector<int>& arr) {
//     int n = arr.size();
    
//     // Outer loop for start index of subarray
//     for (int start = 0; start < n; start++) {
//         // Inner loop for end index of subarray
//         for (int end = start; end < n; end++) {
//             // Print subarray from start to end
//             cout << "[";
//             for (int i = start; i <= end; i++) {
//                 cout << arr[i];
//                 if (i < end) cout << ", ";
//             }
//             cout << "]" << endl;
//         }
//     }
// }

// int main() {
//     // Example usage
//     vector<int> arr;

//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);
//     printSubarrays(arr);
//     return 0;
// }
