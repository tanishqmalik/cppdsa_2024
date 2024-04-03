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


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left=new Node(4);

    cout<<root->right->left->data<<endl;
}