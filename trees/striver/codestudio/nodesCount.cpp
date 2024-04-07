#include <iostream>
using namespace std;


class Node{

    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }

};

int Count(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1 + Count(root->left) + Count(root->right);
    }
}

int main(){
    Node* root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    // root->right->left=new Node(4);

    // cout<<root->right->left->data<<endl;

    int count1= Count(root);
    cout<<count1<<endl;
}