// Maximum Sum Subarray of size K | Sliding Window


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector <int> arr;
    int size;
    cout<<"size"<<endl;
    cin>>size;
    int num;

    int maxsum = INT_MIN;

    int sum=0;

    cout<<"enter elements"<<endl;

    for(int q=0; q<size; q++){
        cin>>num;
        arr.push_back(num);
    }

    int k;
    cout<<"enter size of subarray u want"<<endl;
    cin>>k;

    int i=0;  //start
    int j=0;  //endn

    while(j<arr.size()){
        sum= sum+arr[j];

        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            maxsum= max(maxsum, sum);
            sum= sum-arr[i];
            i++;  
            j++;
        }
    }

    cout<<"Maximum Sum Subarray of size"<<k<<"is"<<maxsum<<endl;
}