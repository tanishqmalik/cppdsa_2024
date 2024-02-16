#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int limit;
    cin>>limit;

    int i;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    int max=arr[0];
    int max2=-1;
    int max3=-1;

    for(i=0; i<limit; i++){
        if(arr[i]>max){
            max3=max2;
            max2=max;
            max=arr[i];
        }

        if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }

        if(arr[i]>max3 && arr[i]!=max2 && arr[i]!=max){
            max3=arr[i];
        }
    }



    cout<<max3<<endl;
}