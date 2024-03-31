#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};

Node* convertArr2LL(vector <int> arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover= head;

    for(int i=1; i<arr.size(); i++){
        Node* temp= new Node(arr[i], nullptr);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Node* deleteHead(Node* head){
//     if(head==nullptr){
//         return head;
//     }
//     Node* temp=head;
//     head=head->next;
//     delete temp;

//     return head;
// }



Node* deleteHead(Node* head, int k){
    if(head==nullptr){
        return head;
    }

    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt =0;
    Node* temp= head;
    Node* prev= nullptr;
    while(temp!=nullptr){
        cnt++;

        if(cnt==k){
            prev->next = prev->next->next;  
            delete temp;
            break;
        }
        prev=temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    Node* head = convertArr2LL(arr);
    print(head);
    Node* deletingHead = deleteHead(head,3);
    print(deletingHead);

}