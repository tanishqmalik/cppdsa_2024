// delete the head of LL

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


Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover=head;


    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

void print(Node* deletinghead){
    while(deletinghead!=nullptr){
        cout<<deletinghead->data<<" ";
        // deletinghead->next=deletinghead;
        deletinghead= deletinghead->next;
    }
    cout<<endl;
}


Node* deletehead(Node* head){
    if(head==nullptr) return head;
    Node* temp=head;
    head=head->next;
    delete temp;

    return head;

}


int main(){
    vector <int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);


    Node*head = convertArr2LL(arr);
    print(head);
    Node* deletingHead = deletehead(head);

    print(deletingHead);

}


// delete the tail of LL

