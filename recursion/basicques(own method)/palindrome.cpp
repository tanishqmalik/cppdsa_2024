#include <iostream> 
using namespace std;

int main(){
    int num;
    cin>>num;
    int originalnum = num;
    int sum=0;
    int sizeofnum=0;


    while(num>0){
        num=num/10;
        sizeofnum++;
    }

    num = originalnum;

    for(int i=0; i<sizeofnum; i++){
        sum=sum*10+num%10;
        num= num/10;
    }

    if(sum == originalnum){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}