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
        this->data= data;
        Node* left = nullptr;
        Node* right= nullptr; 
    }
};



Node* builtTrre(){
    
    int limit;
    cin>>limit;


    // if (limit == 0) return nullptr;
    int data;
    cin>>data;
    
    Node* root= new Node(data);
    queue<Node*>q;
    q.push(root);

    for(int i=1; i<limit; i=i+2){
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


void levelOrder(Node* root){

    if(root==NULL){
        return;
    }
    queue<Node*>q;
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
    int right= height(root ->right);

    return max(left, right)+1;
}

int diameter(Node* root){
    if(root==nullptr){
        return 0;
    }

    int op1= diameter(root->left);
    int op2= diameter(root->right);
    int op3= height(root->left) + height(root->right)+1;

    return max(max(op1,op2), op3);
}

bool isbalanced(Node* root){
    if(root==nullptr){
        return true;
    }
    int hl = height(root->left);
    int rl= height(root->right);

    if(abs(hl-rl)<=1 && isbalanced(root->left) && isbalanced(root->right)){
        return true;
    }
    return false;
}

int main(){
    Node* root= builtTrre();
    levelOrder(root);
    cout<<endl;
    cout<<height(root);
        cout<<endl;
    cout<<diameter(root);
        cout<<endl;
    if(isbalanced(root)){
        cout<<"okay";
    }
    else{
        cout<<"not";
    }
}