#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;


int main() {

    int size; cin>>size;
    vector<char> ch(size);

    for(int i = 0; i<size; i++) {
        cin>>ch[i];
    }

    vector<int> val(size);

    for(int i = 0; i<size; i++) {
        cin>>val[i];
    }

    map<char, vector<int> > mpp;

    for(int i = 0; i<size; i++) {
        mpp[ch[i]].push_back(val[i]);
    }

    for(auto x : mpp) {
        sort(x.second.begin(), x.second.end());
    }

    for (auto pair : mpp) {
        cout << "Sorted values for " << pair.first << ": ";
        for (int val : pair.second) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}