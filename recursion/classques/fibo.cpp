// fibonacci series by loop (0 1 1 2 3 5 8)

#include <iostream>
using namespace std;

int main(){
    int i;
    int limit;
    cin>>limit;
    // int result1 =1;
    int result1=0;
    int result2= 0;
    

    for(i=0; i<limit; i++){
        int result3= result1+result2;
        cout<<result3<<" ";
        result1++;
        if(result3>=1){
            result1=result2;
            result2=result3;
        }
        // result2=result3;
        // result2=result3;
    }
}