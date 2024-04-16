// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* back;

//     public:
//     Node(int data1, Node* next1, Node* back1){
//         data=data1;
//         next=next1;
//         back=back1;
//     }

//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//         back=nullptr;
//     }
// };

// Node* convertArr2DLL(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* prev=head;
//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i], nullptr, prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }

// void print(Node* head){
//     Node*temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
//     cout<<endl;
// }

// Node* deleteTail(Node* head){
//     if(head==nullptr || head->next==NULL){
//         return nullptr;
//     }

//     Node* tail = head;

//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     Node* prev= tail->back;
//     prev->next = nullptr;
//     tail->back=nullptr;   // we can also write:- prev->back=nullptr;
//     delete tail;
//     return head;
// }

// int main(){
//     vector<int> arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);

//     Node*head= convertArr2DLL(arr);
//     print(head);
//     Node* deletingtail= deleteTail(head);
//     print(deletingtail);
// }


// -----------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* back;

//     public:
//     Node(int data1, Node* next1, Node* back1){
//         data=data1;
//         next=next1;
//         back=back1;
//     }

//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//         back=nullptr;
//     }
// };

// Node* convertArr2DLL(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* prev=head;
//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i], nullptr, prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }

// void print(Node* head){
//     Node*temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
//     cout<<endl;
// }

// Node* deleteTail(Node* head){
//     if(head==NULL || head->next==NULL){
//         return nullptr;
//     }

//     Node * tail = head;
//     // head=head->next;

//     while(tail->next!=nullptr){
//         tail=tail->next;
//     }
//     Node* prev = tail->back;
//     prev->next=nullptr;
//     tail->back=nullptr;

//     delete tail;

//     return head;
// }


// int main(){
//     vector<int> arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);

//     Node*head= convertArr2DLL(arr);
//     print(head);
//     Node* deletingtail= deleteTail(head);
//     print(deletingtail);
// }

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

Node* deleteTail(Node* head){
    Node* prev = head;
    
    while(prev->next!=nullptr){
        prev=prev->next;
    }
    Node* temp = prev->back;
    temp->next=nullptr;
    prev->back=nullptr;

    delete prev;

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
    Node* head2= deleteTail(head);
    print(head2);
}