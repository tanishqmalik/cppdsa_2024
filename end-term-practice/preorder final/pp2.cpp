#include <iostream>
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
        Node* left= nullptr;
        Node* right=nullptr;
    }
};


Node* builtTree(){
    int data;
    cin>>data;

    Node* root = new Node(data);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int l,r;
        cin>>l;
        cin>>r;

        if(l!=-1){
            temp->left= new Node(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right= new Node(r);
            q.push(temp->right);
        }
    }
    return root;
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node* root = builtTree();
    preOrder(root);
}