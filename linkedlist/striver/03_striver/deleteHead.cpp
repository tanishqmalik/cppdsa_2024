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

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    Node*head= convertArr2DLL(arr);
    print(head);
    Node* deletinghead= deleteHead(head);
    print(deletinghead);
    
}

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
//         back = back1;
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
//     Node* prev = head;

//     for(int i=1; i<arr.size(); i++){
//         Node* temp= new Node(arr[i], nullptr,prev);
//         prev->next=temp;
//         prev=temp;
//     }

//     return head;
// }

// void print(Node* head){
//     Node* temp = head;

//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

// }

// Node* deleteHead(Node* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* prev = head;
//     head=head->next;
//     head->back=nullptr;
//     prev->next=nullptr;
//     delete prev;
//     return head;
// }

// int main(){
//     vector <int> arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);

//     Node* head = convertArr2DLL(arr);
//     print(head);
//     Node* deletinghead= deleteHead(head);
//     print(deletinghead);

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
//     Node* prev =head;

//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i],nullptr,prev);
//         prev->next=temp;
//         prev=temp;
//     }

//     return head;
// }

// Node* deleteHead(Node* head){
//     if(head==nullptr || head->next==nullptr){
//         return nullptr;
//     }

//     Node* prev = head;
//     head=head->next;
//     head->back=nullptr;
//     prev->next=nullptr;
//     delete prev;

//     return head;
// }


// void print(Node* head){
//     Node* temp = head;
    
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);

//     Node* head = convertArr2DLL(arr);
//     print(head);
//     Node * head2 = deleteHead(head);
//     print(head2);
// }