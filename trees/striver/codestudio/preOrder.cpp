// void preordering(TreeNode<int> * root, vector<int> &arr){
//     if(root==NULL){
//         return;
//     }

//     arr.push_back(root->data);
//     preordering(root->left,arr);
//     preordering(root->right,arr);
// }


// vector<int> preOrder(TreeNode<int> * root){
//     vector<int> arr;
//     preordering(root, arr);

//     return arr;
// }