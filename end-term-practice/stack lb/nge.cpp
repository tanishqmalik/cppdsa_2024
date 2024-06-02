#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int limit;
    cin>>limit;

    for(int i=0; i<limit; i++){
        cin>>arr[i];
    }

    int result[limit];
    fill(result, result+limit, -1);

    for(int i=0; i<2*limit; i++){
        int c_e=i%limit;
        int n_e= (i+1)%limit;

        while(n_e!=c_e && arr[n_e]<=arr[c_e]){
            n_e=(n_e+1)%limit;
        }
        if(n_e!=c_e){
            result[c_e]=arr[n_e];
        }
    }

    for(int i=0; i<limit; i++){
        cout<<result[i]<<" ";
    }
}