#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Get the next greater elements
    int result[n];
    fill(result, result + n, -1);

    // Traverse the array twice to handle the circular nature
    for (int i = 0; i < 2 * n; i++) {
        int current_index = i % n;
        int next_index = (i + 1) % n;
        while (next_index != current_index && arr[next_index] <= arr[current_index]) {
            next_index = (next_index + 1) % n;
        }
        if (next_index != current_index) {
            result[current_index] = arr[next_index];
        }
    }

    // Print the result
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

