#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data ){
        this->data=data;
        Node*left=NULL;
        Node*right=NULL;
    }
};


Node* buildTree(){
    int x;
    cin>>x;

    Node*root=new Node(x);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr= q.front();
        q.pop();
        int l,r;
        cin>>l;
        cin>>r;

        if(l!=-1){
            curr->left=new Node(l);
            q.push(curr->left);
        }
        if(r!=-1){
            curr->right=new Node(r);
            q.push(curr->right);
        }
    }

    return root;
}

int height(Node* root){
    if(root==nullptr){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}


void Postorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<endl;
    Postorder(root->left);
    Postorder(root->right);

}

int main(){
    Node* root= NULL;
    root=buildTree();
    Postorder(root);
    cout<<endl;
    cout<<height(root)<<endl;
}