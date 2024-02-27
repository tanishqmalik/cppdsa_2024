#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next= next1;
    } 

    public:
    Node(int data1){
        data=data1;
        next= nullptr;
    }
};
Node* ConvertArr2LL(vector<int> &arr){
    Node *head= new Node(arr[0]);
    Node* mover = head;
    for(int i=0; i<arr.size(); i++){
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthofLL(Node *head){
    int cnt=0;
    Node *temp=head;
    while(temp){
        // cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    Node *head=ConvertArr2LL(arr);
    // Node *temp=head;

    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    cout<<lengthofLL(head);
}