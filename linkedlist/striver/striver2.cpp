#include <iostream>
#include <vector>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node *next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void printLL(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node removesHead(Node *head){
    if(head==NULL) return head;
    Node *temp =head;
    head=head->next;
    delete temp;
    return head;
}
int main(){
    vector <int> arr={12 ,5,8 ,7};
    Node *head = con
}

