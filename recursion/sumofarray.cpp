// sum of array using Recursion


#include <iostream>
using namespace std;


int  sumofarray(int arr[], int size){
    if(size==0){
        return 0;
    }
    else{
        size--;
        return arr[size-1]+ sumofarray(arr,size);
        
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    int sum=sumofarray(arr,size);

    cout<<sum<<endl;

}