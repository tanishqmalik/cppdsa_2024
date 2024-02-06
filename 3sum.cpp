#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int temp[1000],temp1[1000],temp2[1000];
    int index=0;
    int limit;
    cin>>limit;
    int i,j,k;
    int eletofind;
    int sum=0,sum1=0,sum3=0;


    for(i=0; i<limit; i++){
        cin>>arr[i];
    }

    cin>>eletofind;

    for(i=0; i<limit; i++){
        for(j=i+1; j<limit; j++){
            for(k=j+1; k<limit; k++){
                if(arr[i]+arr[j]+arr[k]==eletofind){
                    temp[index]=arr[i];
                    temp1[index]=arr[j];
                    temp2[index]=arr[k];
                    index++;
                    break;
                }
            }
        }
    }

    int size;


    size =index;

    for(i=0; i<size; i++){
        cout<<temp[i]<<" "<< temp1[i]<<" "<<temp2[i]<<endl;
    }


}