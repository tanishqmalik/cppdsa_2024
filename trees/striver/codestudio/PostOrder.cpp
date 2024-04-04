// void postOrder(TreeNode* root, vector<int> &arr){
//     if(root==NULL){
//         return;
//     }

//     postOrder(root->left, arr);
//     postOrder(root->right,arr);
//     arr.push_back(root->data);
// }

// vector<int> postorderTraversal(TreeNode *root)
// {
//     vector<int>arr;
//     postOrder(root, arr);
//     return arr;
// }