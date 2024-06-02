#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildtree(vector<int> arr, node*& root){
    if(arr.empty()){
        return;
    }
    root = new node(arr[0]);
    queue<node*> q;
    q.push(root);
    int i = 1;
    while(!q.empty() && i < arr.size()){
        node* temp = q.front();
        q.pop();
        if(i < arr.size() && arr[i] != -1){
            temp->left = new node(arr[i]);
            q.push(temp->left);
        }
        i++; // Increment i after processing left child

        if(i < arr.size() && arr[i] != -1){
            temp->right = new node(arr[i]);
            q.push(temp->right);
        }
        i++; // Increment i after processing right child
    }
}

void preorder(node* root){
    if(root == NULL) {
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}


int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    node* root = NULL;
    buildtree(v, root);
    preorder(root);
    return 0;
}