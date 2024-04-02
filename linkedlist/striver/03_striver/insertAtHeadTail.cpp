#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node* insertAtHead(Node* head,int value){
    Node* newNode= new Node(value, head,nullptr);
    head= newNode;
    // cout<<head->back<<endl;
    // cout<<head->data<<endl;
    // cout<<head->next->data<<endl;
    return newNode;
}



Node* insertAtTail(Node* head, int value){
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"insertion at tail starts"<<endl;
    // if(head==nullptr){
    //     return newNode;
    // }
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node * newNode = new Node(value);

    tail->next=newNode;
    newNode->back=tail;

    cout<<"currently tail:- "<<tail->data<<endl;
    cout<<"before tail:- "<<tail->back->data<<endl;
    cout<<"after tail:- "<<tail->next->data<<endl;

    return head;
}
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    Node*head= convertArr2DLL(arr);
    print(head);
    Node* insertingathead = insertAtHead(head,1);
    print(insertingathead);

    Node* insertingattail = insertAtTail(head,20);
    print(insertingattail);
}