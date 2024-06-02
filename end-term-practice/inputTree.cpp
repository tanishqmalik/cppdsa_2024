#include<iostream>
#include<queue>
using namespace std;

class node{
  public:
  int data;
  node*left;
  node*right;
  node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};

node*buildtree(){
  int x;
  cin>>x;
  node*root=new node(x);
  queue<node*>q;
  q.push(root);
  while(!q.empty()){
    node*curr=q.front();
    q.pop();
    int l;
    int r;
    cin>>l;
    cin>>r;
    if(l!=-1){
      curr->left=new node(l);
      q.push(curr->left);
    }
    if(r!=-1){
      curr->right=new node(r);
      q.push(curr->right);
    }
  }
  return root;
}

void preorder(node*&root){
  if(root==NULL){
    return ;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

int height(node*&root){
  if(root==NULL){
    return 0;
  }
  int left=height(root->left);
  int right=height(root->right);
  return max(left,right)+1;
}

int main(){
  node*root=buildtree();
  preorder(root);
  cout<<endl;
  int ans=height(root);
  cout<<ans;
}