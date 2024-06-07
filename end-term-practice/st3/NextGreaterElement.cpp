#include <iostream>
using namespace std;

int main(){
    int arr[10000];
    int limit;
    cin>>limit;

    for(int i=0; i<limit; i++){
        cin>>arr[i];
    }
    
    int result[1000];
    fill(result, result+limit, -1);


    for(int i=0; i<2*limit; i++){
        int current=i%limit;
        int next= (i+1)%limit;

        while(next != current && arr[next]<= arr[current]){
            next = (next+1)%limit;
        }
        if(next!=current){
            result[current]=arr[next];
        }
    }
    for(int i=0; i<limit; i++){
        cout<<result[i]<<" ";
    }
}