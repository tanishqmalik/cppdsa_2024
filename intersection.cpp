#include <iostream> 
using namespace std;

int main(){
    int arr1[1000];
    int arr2[1000];
    int arr3[1000];
    int limit1;
    cin>>limit1;
    
    int i, j;

    for(i=0; i<limit1; i++){
        cin>>arr1[i];
    }

    int limit2;
    cin>>limit2;

    for(i=0; i<limit2; i++){
        cin>>arr2[i];
    }

    int index=0;

    for(i=0; i<limit1; i++){
        for(j=0; j< limit2; j++){
            if(arr1[i]==arr2[j]){
                arr3[index]=arr1[i];
                index++;
                break;
            } 
        }
    }

    int size = index;


    for(i=0; i<size; i++){
        cout<<arr3[i]<<" ";
    }
}