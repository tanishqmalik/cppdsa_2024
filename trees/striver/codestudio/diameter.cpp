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


int heightofBT1(Node* root){
    if(root==nullptr){
        return 0;
    }

    int left=heightofBT1(root->left)+1;
    return left;
}


int heightofBT2(Node* root){
    if(root==nullptr){
        return 0;
    }
    int right = heightofBT2(root->right)+1;

    return right;
}

int diameterOfBinaryTree(Node* root){
    int h_one= heightofBT1(root->left);
    int h_two = heightofBT2(root->right);

    return h_one+h_two;
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right= new Node(7);


    cout<<diameterOfBinaryTree(root)<<endl;

}