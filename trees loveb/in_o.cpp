#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data= data;
        left=NULL;
        right=NULL;
    }
};


Node* buildTree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);

    cout<<"enter the left value"<< data<<"node"<<endl;
    root->left= buildTree();
    cout<<"enter the right value"<< data<<"node"<<endl;
    root->right=buildTree();

    return root;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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
    Node* root = NULL;
    root=buildTree();

    cout<<"inorder"<<endl;
    inOrder(root);
    cout<<endl;


    cout<<"postorder"<<endl;
    postOrder(root);
    cout<<endl;


    cout<<"preorder"<<endl;
    preOrder(root);
    cout<<endl;
}