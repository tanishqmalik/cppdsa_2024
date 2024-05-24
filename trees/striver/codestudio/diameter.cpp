// #include <iostream>
// using namespace std;


// class Node{

//     public:
//     int data;
//     Node* left;
//     Node* right;

//     public:
//     Node(int val){
//         data=val;
//         left=right=NULL;
//     }

// };



// int heightofBT(Node* root){
//     if(root==nullptr){
//         return 0;
//     }
//     int right = heightofBT(root->right);
//     int left=heightofBT(root->left);

//     return max(left, right)+1;

// }

// int diameterOfBinaryTree(Node* root){
//     if(root==nullptr){
//         return 0;
//     }

//     int opt1 = diameterOfBinaryTree(root->left);
//     int opt2 = diameterOfBinaryTree(root->right);
//     int opt3= heightofBT(root->left)+ heightofBT(root->right)+1;

//     return max(opt3, max(opt2, opt1));

    
// }


// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left=new Node(4);
//     root->left->right= new Node(7);


//     cout<<diameterOfBinaryTree(root)<<endl;

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
        Node* right= NULL;
        Node* left= NULL;
    }

};


Node* buildTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left= buildTree();
    root->right=buildTree();


    return root;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int hL= height(root->left);
    int rL = height(root->right);

    int ans = 1+ max(hL,rL);
    return ans;
}


int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int op1 = diameter(root->left);
    int op2= diameter(root->right);

    int op3 = height(root->left)+ height(root->right);

    return max(op3 , max(op1, op2));
}


bool balanced(Node* root){
    if(root==NULL){
        return true;
    }

    int hL= height(root->left);
    int rL= height(root->right);

    if(abs(hL-rL)<=1 && diameter(root->left) && diameter(root->right)){
        return true;
    }

    return false;

}


int main(){
    Node* root = NULL;
    root=buildTree();

    int hBT = height(root);
    cout<<hBT<<endl;

    int diameter1 = diameter(root);
    cout<<diameter1<<endl;

    if(balanced(root)){
        cout<<"true"<<endl;
    }

    else{
        cout<<"false"<<endl;
    }
}