#include <iostream>
#include <queue>
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
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left=buildTree();
    root->right=buildTree();

    return root;
}


// void level_o(Node* root){
//     queue<Node*>q; 
//     q.push(root);

//     while(!q.empty()){
//         Node* temp= q.front();

//         q.pop();

//         cout<<temp->data<<" ";

//         if(temp->left){
//             q.push(temp->left);
//         }

//         if(temp->right){
//             q.push(temp->right);
//         }
//     }
// }

// int heightofTree(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int heightofleft = heightofTree(root->left);
//     int heightofright= heightofTree(root->right);

//     int ans = 1+ max(heightofleft, heightofright);

//     return ans;
// }


int heightofTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int hL= heightofTree(root->left);
    int rL= heightofTree(root->right);

    int ans= 1 + max(hL,rL);

    return ans;
}

int main(){
    Node* root= NULL;
    root=buildTree();

    // level_o(root);

    cout<<endl;
    cout<<"heightOftree"<<endl;
    cout<<heightofTree(root)<<endl;
}