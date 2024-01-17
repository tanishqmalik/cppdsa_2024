
#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int i;
    int limit;
    cin >> limit;
    int find;
    cin >> find;
    int stored; 

    for (i = 0; i < limit; i++) {
        cin >> arr[i];
    }

    for(i=0; i<limit-1; i++){
        if(find==arr[i]){
            stored=i;
            break;
        }
    }
    cout<<stored<<endl;
}