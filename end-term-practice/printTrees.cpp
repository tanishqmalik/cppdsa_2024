// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         Node *left = nullptr;
//         Node *right = nullptr;
//     }
// };
// Node *builtTree()
// {
//     cout << "enter data" << endl;
//     int data;
//     cin >> data;

//     if (data == -1)
//     {
//         return nullptr;
//     }

//     Node *root = new Node(data);
//     root->left = builtTree();
//     root->right = builtTree();

//     return root;
// }

// void preOrder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// int main()
// {
//     Node *root = builtTree();
//     preOrder(root);
// }

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
        Node* left=NULL;
        Node* right=NULL;
    }
};

Node* builtTree(){
    int data;
    cin>>data;

    if(data==-1){
        return nullptr;
    }

    Node* root = new Node(data);
    root->left=builtTree();
    root->right=builtTree();

    return root;
}

void level_o(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node * temp = q.front();
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


void preorder(Node* root){
    if(root==nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

    Node* root = builtTree();
    preorder(root);

    cout<<"level_o"<<endl;
    level_o(root);
    
}