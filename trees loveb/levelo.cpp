#include<iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
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
    root->right= buildTree();

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;

    // initially
    q.push(root);
    q.push(NULL); //for level printing

    while(!q.empty()){

        //a
        Node* temp = q.front();
        //b
        q.pop();

        if(temp==NULL){         //|
            cout<<endl;         //|
            if(!q.empty()){     //for level printing
                q.push(NULL);   //|
            }                   //|
        }                       //|

        else{                   //| for level printing

            //c
            cout<<temp->data<<" ";
            //d

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

int main(){
    Node* root = NULL;
    root = buildTree();
    levelOrderTraversal(root);
}