// first and last position of an element in sorted array

// brute force
// my approach but its printing the last two same elemnts indexes for e.g input : - 4 4 4 4 then output:- 2 3. but it should give me 0 3


#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;
    int i,j;
    int index=1;
    int eletosearch;
    int temp1,temp2;
    
    cin>>eletosearch;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }
    

    for(i=0; i<limit; i++){
        for(j=i+1; j<limit+1; j++){
            if(arr[j]==arr[i]){
                if(eletosearch==arr[j]){
                    temp1=i;
                    temp2=j;
                }
            }
        }
    }
    // cout<<index<<endl;
    cout << temp1<< temp2 <<endl;
}