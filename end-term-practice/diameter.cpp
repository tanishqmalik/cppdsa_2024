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
        Node* left= nullptr;
        Node* right=nullptr;
    }
};

Node* BuiltTree(){
    int data;
    cin>>data;

    if(data==-1){
        return nullptr;
    }

    Node* root= new Node(data);
    root->left = BuiltTree();
    root->right=BuiltTree();

    return root;
}

void level_o(Node* root){
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

}

int  height(Node* root){
    if(root==nullptr){
        return 0;
    }

    int hL = height(root->left);
    int rL = height(root->right);

    return 1+max(hL,rL);
}

int diameter(Node* root){
    if(root==nullptr){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2=diameter(root->right);
    int op3= height(root->left)+height(root->right);

    return max(op3, max(op1,op2));
}

int main(){
    Node* root=BuiltTree();
    height(root);

    level_o(root);

    cout<<height(root)<<endl;
    cout<<"diameter"<<endl;
    cout<<diameter(root)<<endl;
}