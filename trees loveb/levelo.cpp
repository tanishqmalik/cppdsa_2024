// #include<iostream>
// #include <queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
// };

// Node* buildTree(){

//     int data;
//     cout<<"enter the data"<<endl;
//     cin>>data;

//     if(data==-1){
//         return NULL;
//     }

//     Node* root = new Node(data);

//     cout<<"enter the left value"<< data<<"node"<<endl;
//     root->left= buildTree();
//     cout<<"enter the right value"<< data<<"node"<<endl;
//     root->right= buildTree();

//     return root;
// }

// void levelOrderTraversal(Node* root){
//     queue<Node*>q;

//     // initially
//     q.push(root);
//     q.push(NULL); //for level printing

//     while(!q.empty()){

//         //a
//         Node* temp = q.front();
//         //b
//         q.pop();

//         if(temp==NULL){         //|
//             cout<<endl;         //|
//             if(!q.empty()){     //for level printing
//                 q.push(NULL);   //|
//             }                   //|
//         }                       //|

//         else{                   //| for level printing

//             //c
//             cout<<temp->data<<" ";
//             //d

//             if(temp->left){
//                 q.push(temp->left);
//             }

//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }

//     }
// }

// int main(){
//     Node* root = NULL;
//     root = buildTree();
//     levelOrderTraversal(root);
// }


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
        Node* left=NULL;
        Node* right=NULL;
    }
};

Node* buildTree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* root= new Node(data);
    cout<<"enter the left value"<<data<<"node"<<endl;
    root->left= buildTree();
    cout<<"enter the right value"<<data<<"node"<<endl;
    root->right= buildTree();

    return root;
}

void levelOrderT(Node* root){

    queue <Node*> q;
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

void preOrder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


void postOrder(Node* root){
    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


void inOrder(Node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    
}


int main(){
    Node* root= NULL;
    root=buildTree();

    cout<<"levelorder"<<endl;
    levelOrderT(root);
    cout<<endl;

    cout<<"preorder"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"postorder"<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"inOrder"<<endl;
    inOrder(root);
    cout<<endl;
}