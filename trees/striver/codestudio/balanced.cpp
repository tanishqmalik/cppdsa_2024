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

int heightofBT1(Node* root1){
    if(root1==nullptr){
        return 0;
    }

    int left= heightofBT1(root1->left);
    int right= heightofBT1(root1->right);

    return 1+ max(left, right);

}

int heightofBT2(Node* root2){
    if(root2==nullptr){
        return 0;
    }

    int left= heightofBT2(root2->left);
    int right= heightofBT2(root2->right);

    return 1+ max(left, right);

}

int main(){
    Node* root = new Node(3);

    Node* root1 = root->left=new Node(9);
    Node* root2= root->right = new Node(20);

    root2->left=new Node(15);
    root2->right= new Node(7);

    int h1 = heightofBT1(root1);
    int h2 = heightofBT2(root2);

    if((h2-h1)==1 || (h1-h2)==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}


//right solution

// int heightofBT(TreeNode<int>* root){
//     if(root==nullptr){
//         return 0;
//     }

//     int left= heightofBT(root->left);
//     int right= heightofBT(root->right);

//     return 1+ max(left, right);
// }


// bool isBalancedBT(TreeNode<int>* root){
//     if(root==nullptr){
//         return true;
//     }

//     int h1= heightofBT(root->left);
//     int h2 = heightofBT(root->right);


//     if(abs(h2-h1)>1){
//         return false;
//     }

//     bool left =   isBalancedBT(root->left);
//     bool right = isBalancedBT(root->right);

//     if(!left || !right) return false;
//     return true;

// }