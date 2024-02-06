// every integer ocuurs twice and one integer once .print that integer

#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int limit;
    cin >> limit;
    int temp = 0;
    int i,j;


    for ( i = 0; i < limit+1; i++) {
        cin>>arr[i];
    }

    for ( i = 0; i < limit+1; i++) {
        for(int j=i+1; i<limit; j++){
            temp=temp^arr[i];
        }
    }

    cout << temp << endl;

    return 0;
}
