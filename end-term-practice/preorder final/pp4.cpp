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
        Node* left;
        Node* right;
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

        int l;
        int r;

        cin>>l;
        cin>>r;

        if(l!=-1){
            temp->left=new Node(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right=new Node(r);
            q.push(temp->right);
        }
    }
    return root;
}

void levelOrder(Node* root){
    queue<Node*>q;
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
    cout<<endl;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int op1= diameter(root->left);
    int op2= diameter(root->right);

    int op3= height(root->left)+height(root->right)+1;

    return max(op3, max(op1,op2));
}


bool isbalanced(Node* root){
    if(root==nullptr){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right)){
        return true;
    }
    return false;
}

int main(){
    Node* root= builtTree(); 
    levelOrder(root);
    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;

    if(isbalanced(root)){
        cout<<"okay"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
}