#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;

    int i,j;


    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    int value;
    int position;

    cin>>value;
    cin>>position;

    for(i=limit; i>position-1; i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;

    for(i=0; i<limit+1; i++){
        cout<<arr[i]<<" ";
    }

}