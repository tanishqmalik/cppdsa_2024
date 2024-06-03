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
        Node* left=nullptr;
        Node* right=nullptr;
    }

};


Node* builtTree(){
    int data;
    cin>>data;

    Node* root = new Node(data);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int l,r;
        cin>>l;
        cin>>r;

        if(l!=-1){
            temp->left= new Node(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right= new Node(r);
            q.push(temp->right);
        }
    }
    return root;
}

void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    queue <Node*> q;
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

int height(Node* root){
    if(root==nullptr){
        return 0;
    }
    int left = height(root->left);
    int right= height(root->right);
    return max(left, right)+1;
}

int main(){
    Node* root= builtTree();
    cout<<"postorder:- ";
    postorder(root);
    cout<<endl;
    cout<<"levelorder:- ";
    levelOrder(root);
    cout<<endl;
    cout<<"height:- ";
    cout<<height(root)<<endl;
}