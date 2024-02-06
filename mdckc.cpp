#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int limit;
    cin >> limit;
    int temp = 0;

    for (int i = 0; i < limit; i++) {
        cin >> arr[i];
        temp ^= arr[i];
    }

    cout << temp << endl;

    for(int i=0; i<limit; i++){
        temp = temp^i;
    }

    cout <<temp<<endl;

    return 0;
}
