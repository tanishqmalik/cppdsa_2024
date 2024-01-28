// apply ls to find out the largest three elemnts in the array


#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int i,j ,limit;
    cin>>limit;

    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    int max1= arr[1];
    int max2 = -1;
    int max3=-2;

    for(i=0; i<limit; i++){
        if(arr[i]>max1){
            max1=arr[i];
        }

        if(arr[i]>max2 && arr[i]!= max1){
            max2=arr[i];
        }

        if(arr[i]>max3 && arr[i]!=max2 && arr[i]!=max1){
            max3=arr[i];
        }
    }

    cout<< max1<< max2<< max3<<endl;

}