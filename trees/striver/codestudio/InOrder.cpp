// void getInOrder(TreeNode *root, vector<int>&arr){
//     if(root==NULL){
//         return;
//     }

//     getInOrder(root->left,arr);
//     arr.push_back(root->data);
//     getInOrder(root->right,arr);
// }

// vector<int> getInOrderTraversal(TreeNode *root)
// {
//     vector<int>arr;
//     getInOrder(root,arr);
//     return arr;
// }