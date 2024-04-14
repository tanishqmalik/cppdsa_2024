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

Node* convertArr2LL(vector<int> &arr){
    Node* head =new Node(arr[0],nullptr);
    Node* mover=head;


    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next= temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


Node* deleteTail(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }

    Node* temp =head;

    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    // free(temp->next);
    temp->next=nullptr;

    return head;
}

int main(){
    vector<int> arr;

    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    Node* head = convertArr2LL(arr);
    print(head);
    head=deleteTail(head);
    print(head);
}




// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
// };

// Node* convertArr2LL(vector<int> &arr){
//     Node* head =new Node(arr[0],nullptr);
//     Node* mover=head;


//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i],nullptr);
//         mover->next= temp;
//         mover=temp;
//     }
//     return head;
// }

// void print(Node* head){
//     while(head!=nullptr){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }


// Node* deleteTail(Node* head){
//     if(head==nullptr || head->next==nullptr){
//         return head;
//     }

//     Node* temp=head;

//     while(temp->next->next!=nullptr){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next= nullptr;

//     return head;
// }


// int main(){
//     vector<int> arr;

//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);
//     arr.push_back(6);

//     Node* head = convertArr2LL(arr);
//     print(head);

//     Node* deletingTail= deleteTail(head);
//     print(deletingTail);
// }