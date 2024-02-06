#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int arrtemp[1000];
    int arrtemp2[1000];
    int limit;
    cin>>limit;
    int i,j;
    int eletofind;
    cin>>eletofind;
    int one;
    int two;
    int index=0;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    for(i=0; i<limit; i++){
        for(j=i; j<limit; j++){
            if(arr[i]+arr[j]==eletofind){
                arrtemp[index]=arr[i];
                arrtemp2[index]=arr[j];
                index++;
            }
        }
    }

    int size = index;

    for(i=0; i<index; i++){
        cout<<arrtemp[i]<<" "<<arrtemp2[i]<<endl;
    }
    
}