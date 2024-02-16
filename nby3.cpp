#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int limit;
    cin>>limit;
    int i,j;
    int count=0;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit; i++){
        for(j=i+1; j<limit; j++){
            if( arr[j]==arr[i]){
                count++;
                break;
            }         
        }     
    }
    cout<< count<<endl;
}