#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector <int> union_of_arrays(vector<int> vec1, vector<int> vec2){
    set<int> union_set;

    for(int i=0; i<vec1.size(); i++){
        union_set.insert(vec1[i]);
    }

    for(int i=0; i<vec2.size(); i++){
        union_set.insert(vec2[i]);
    }

    vector<int> union_vec(union_set.begin(), union_set.end());

    return union_vec;
}

int main(){
    vector<int> vec1;
    vector<int> vec2;

    int element;

    int n1,n2;
    int i;

    cin>>n1;
    cin>>n2;

    int num1,num2;

    for(i=0;i<n1;i++){
        cin>>num1;
        vec1.push_back(num1);
    }

    for(i=0; i<n2; i++){
        cin>>num2;
        vec2.push_back(num2);
    }

    vector<int> result = union_of_arrays(vec1, vec2);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

}