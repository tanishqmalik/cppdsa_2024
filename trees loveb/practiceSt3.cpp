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
        Node*right=NULL;
        Node*left=NULL;
    }
};

Node* buildTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}

void level_o(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    Node* root=NULL;
    root=buildTree();

    cout<<"level_o"<<endl;
    level_o(root);
    cout<<endl;

    preorder(root);
}