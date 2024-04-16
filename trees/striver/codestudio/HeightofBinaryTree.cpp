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

// int heightOfBinaryTree(Node* root){
//     if(root==nullptr){
//         return 0;
//     }

//     int left= heightOfBinaryTree(root->left);
//     int right= heightOfBinaryTree(root->right);

//     int ans = max(left,right)+1;
//     return ans;
// }

// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right =new Node(3);

//     int ans = heightOfBinaryTree(root);
//     cout<<ans<<endl;
// }




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

//     int left= heightofBT(root->left);
//     int right= heightofBT(root->right);

//     return 1 + max(left,right);

// }

// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(3);
//     root->left->left = new Node(4);
//     root->left->left->right = new Node(5);

//     int ans= heightofBT(root);
//     cout<<ans<<endl;
// }