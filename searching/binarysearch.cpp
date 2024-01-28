#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;
    int find;

    for(int i=0; i<limit; i++){
        cin>>arr[i];
    }

    cin>>find;

    int temp;
    int start=0;
    int end=limit-1;

    int mid= (start+end)/2;

    

    for(int i=0; i<limit; i++){
        if(arr[mid]==find){
            temp=mid;
        }
        if(arr[mid]<find){
            start= mid+1;
        }

        else{
            end=mid-1;
        }

        // mid=(start+end)/2;
    }

    cout<<temp<<endl;
}