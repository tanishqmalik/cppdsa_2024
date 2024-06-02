#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int x;
    int limit;
    cin>>limit;
    int num1;
    for(int i=0; i<limit; i++){
        cin>>num1;
        arr.push_back(num1);
    }
    cin>>x;
    int position;
    cin>>position;

    arr.insert(arr.begin()+position, x);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}