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



int heightofBT(Node* root){
    if(root==nullptr){
        return 0;
    }
    int right = heightofBT(root->right);
    int left=heightofBT(root->left);

    return max(left, right)+1;
}

int diameterOfBinaryTree(Node* root){
    if(root==nullptr){
        return 0;
    }

    int opt1 = diameterOfBinaryTree(root->left);
    int opt2 = diameterOfBinaryTree(root->right);
    int opt3= heightofBT(root->left)+ heightofBT(root->right)+1;

    return max(opt3, max(opt2, opt1));

    
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right= new Node(7);


    cout<<diameterOfBinaryTree(root)<<endl;

}