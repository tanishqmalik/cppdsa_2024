// First Negative Number in every Window of Size K | Sliding Window
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;

    int size;
    int num;
    
    // int sum=0;

    cin>>size;
    for(int q=0; q<size; q++){
        cin>>num;
        arr.push_back(num);
    }

    int i=0; //start
    int j=0; //end

    cout<<"subarray size"<<endl;
    int k;
    cin>>k;

    

    while(j<arr.size()){
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            bool found=false;
            for(int e=i; e<=j; e++){
                if(arr[e]<0){
                    cout<<arr[e]<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<0<<endl;
            }
            i++;
            j=1;
        }
    }
}