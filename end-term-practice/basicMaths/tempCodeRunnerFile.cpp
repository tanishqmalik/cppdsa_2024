#include <iostream>
// #include <queue>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         Node* left = nullptr;
//         Node* right= nullptr; 
//     }
// };

// Node* buildTree() {
//     int limit;
//     cin >> limit;

//     // if (limit == 0) return nullptr;

//     int data;
//     cin >> data;
//     Node* root = new Node(data);
//     queue<Node*> q;
//     q.push(root);

//     for (int i = 1; i < limit; i += 2) {
//         Node* temp = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         if (l != -1) {
//             temp->left = new Node(l);
//             q.push(temp->left);
//         }
//         if (r != -1) {
//             temp->right = new Node(r);
//             q.push(temp->right);
//         }
//     }
//     return root;
// }

// void levelOrder(Node* root) {
//     // if (!root) return;

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* temp = q.front();
//         q.pop();

//         cout << temp->data << " ";

//         if (temp->left) {
//             q.push(temp->left);
//         }
//         if (temp->right) {
//             q.push(temp->right);
//         }
//     }
//     cout << endl;
// }

// int main() {
//     Node* root = buildTree();
//     levelOrder(root);
//     return 0;
// }