#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildtree(vector<int> arr, Node* &root){
    if(arr.empty()){
        return;
    }
    root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i=1;
    while(!q.empty() && i<arr.size()){
        Node* temp = q.front();
        q.pop();

        if(i<arr.size() && arr.size()){
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;

        if(i<arr.size() && arr[i]!= -1){
            temp->right= new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> cv;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int num1;
        cin>>num1;
        cv.push_back(num1);
    }
    Node* root= NULL;
    buildtree(cv, root);
    preorder(root);

}