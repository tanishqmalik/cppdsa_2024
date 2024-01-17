#include <iostream>
using namespace  std;

int main(){
    int arr[100];
    int i,j,limit;
    cin>>limit;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit-1; i++){
        for(j=i+1; j<limit; j++){
            if(arr[i]>arr[j]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(i=0; i<limit; i++){
        cout<<arr[i]<<endl;
    }
}


