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


Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev = head;
    head=head->next;
    head->back=NULL;
    prev->next=NULL;
    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(head==nullptr || head->next==NULL){
        return nullptr;
    }

    Node* tail = head;

    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev= tail->back;
    prev->next = nullptr;
    tail->back=nullptr;   // we can also write:- prev->back=nullptr;
    delete tail;
    return head;
}


Node* deleteKth(Node* head, int k){
    if(head==nullptr){
        return nullptr;
    }

    Node* kthNode= head;
    int cnt = 0;
    while(kthNode!=nullptr){
        cnt++;
        if(cnt==k){
            break;
        }
        kthNode=kthNode->next;
    }
    Node* prev= kthNode->back;
    Node* front= kthNode->next;


    if(prev==nullptr && front==nullptr){
        return nullptr;
    }
    else if(prev==nullptr){
        return deleteHead(head);    // why we didn't enter kthNode in deleteHead function ????
    }
    else if(front==nullptr){
        return deleteTail(head);
    }

    prev->next=front;
    front->back=prev;

    kthNode->next=nullptr;
    kthNode->back=nullptr;

    delete kthNode;

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

    Node* deletingKthNode = deleteKth(head,1);
    print(deletingKthNode);
    
}