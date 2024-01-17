#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    int i,j;
    cin>>limit;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit+1; i++){
        for(j=i+1; j<limit; j++){
            while(j>0 && arr[j-1]> arr[j]){
                int temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }

    for(i=0; i<limit; i++){
        cout<< arr[i]<< endl;
    }
}