#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int arr[1000];
  vector<int> arr1;
  vector<int> arr2;
  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    if(arr[i]%2==0){
      arr1.push_back(arr[i]);
    }
    if(arr[i]%2==1){
        arr2.push_back(arr[i]);
    }
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  for(int i=arr2.size()-1; i>=0; i--){
    cout<<arr2[i]<<" ";
  }
  for(int i=0; i<arr1.size(); i++){
    cout<<arr1[i]<<" ";
  }
}