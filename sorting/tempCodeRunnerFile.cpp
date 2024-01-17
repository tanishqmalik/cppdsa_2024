#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1000];
    int i,j;
    int limit;
    cin>>limit;
    int min_i;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit-2; i++){
        min_i=i;
        for(j=i; j<limit-1; j++){
            if(arr[j]<arr[min_i]){
                min_i=j;
            }
        }
        int temp= arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }


    for(i=0; i<limit; i++){
        cout<< arr[i] << " ";
    }
}