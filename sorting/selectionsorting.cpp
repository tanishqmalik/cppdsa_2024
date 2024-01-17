#include <iostream>
using namespace std;

void selectionSort(int arr[],int limit){
    int i,j;
    for(i=0; i<=limit-2; i++){
        int mini=i;
        for(j=i; j<=limit-1; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[100];
    int limit;
    cin>>limit;
    int i,j;

    for(i=0; i<limit; i++) cin>>arr[i];
    selectionSort(arr, limit);

    for(i=0; i<limit; i++){
        cout<< arr[i]<<endl;
    }
}