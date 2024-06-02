// N = 5
// A[] = {-8, 2, 3, -6, 10}
// K = 2
// Output : 
// -8 0 -6 -6
// Explanation :
// First negative integer for each window of size k
// {-8, 2} = -8
// {2, 3} = 0 (does not contain a negative integer)
// {3, -6} = -6
// {-6, 10} = -6


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;
    int arr[1000];
    int limit;
    cin>>limit;

    for(int i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(int i=0; i<limit; i++){
        for(int j=0; j<limit; j++){
            if(arr[i]<0){
                vec.push_back(arr[i]);
                break;
            }
            if(arr[j]<0){
                vec.push_back(arr[j]);
                break;
            }
            else{
                vec.push_back(0);
                break;
            }
        }
    }

    for(auto it :vec){
        cout<<it<<" ";
    }
}