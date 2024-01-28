#include <iostream>
using namespace std;


int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int cnt =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt ++;
        }
    }
    // place pivot at right positiion
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal
    int i=s, j=e;
 
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e) return;

    // partition

    int p= partition(arr,s,e);

    // left part sort karo
    quickSort(arr, s, p-1);

    // right part sort karo
    quickSort(arr, p+1, e);
}

int main(){
    int arr[1000];
    int limit;
    int i;



    cin>>limit;
    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, limit-1);

    for(int i=0; i<limit; i++){
        cout<< arr[i]<<" ";
    }
}

// write a program to display the elements of char array,input should be provided by user



