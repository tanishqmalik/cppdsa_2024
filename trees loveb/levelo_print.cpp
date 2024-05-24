#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Node {
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* buildtree(vector<int> &arr) {
  if(arr.empty()){
    return NULL;
  }
  Node* root = new Node(arr[0]);
  queue<Node*> q;
  q.push(root);

  int i = 1;
    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        if (arr[i] != INT_MIN) {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != INT_MIN) {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;

}

void inorder(Node* root) {
  if(root == NULL) return;
  cout << root->data << " ";
  inorder(root->left);
  inorder(root->right);
}

int main() {
  int size; cin>>size;
  vector<int> arr(size);

  for(int i = 0; i<size; i++) {
    string ele; cin >> ele;
    if(ele == "null") {
      arr[i] = INT_MIN;
    } else {
      arr[i] = stoi(ele);
    }
  }

  Node* root = buildtree(arr);
  inorder(root);
  return 0;
}

