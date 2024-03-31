#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

Node* convertArr2LL(vector <int> arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for(int i=1; i< arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

void print(Node* head){
    Node* temp= head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

Node* insertAtHead(Node* head, int value){
    return new Node(value,head);
}


int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    Node* head = convertArr2LL(arr);
    print(head);
    Node* insertingAtHead= insertAtHead(head,9);
    print(insertingAtHead);
}