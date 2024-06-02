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
        Node* left =nullptr;
        Node* right=nullptr;
    }
};

Node* builtTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root=new Node(data);
    root->left= builtTree();
    root->right=builtTree();

    return root;
}

int heightofTree(Node* root){
    if(root==nullptr){
        return 0;
    }

    int hL = heightofTree(root->left);
    int rL= heightofTree(root->right);

    return 1+max(hL,rL);


}

void level_o(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
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


int main(){
    Node* root = nullptr;
    root=builtTree();

    level_o(root);
    cout<<endl;
    
    cout<<heightofTree(root)<<endl;
}