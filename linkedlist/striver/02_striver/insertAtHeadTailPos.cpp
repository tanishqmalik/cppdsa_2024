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

//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

// Node* convertArr2LL(vector <int> arr){
//     Node* head = new Node(arr[0], nullptr);
//     Node* mover = head;

//     for(int i=1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i],nullptr);
//         mover->next=temp;
//         mover=temp;
//     }

//     return head;
// }

// void print(Node* head){
//     Node* temp= head;

//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

//     cout<<endl;
// }

// Node* insertAtHead(Node* head, int value){
//     return new Node(value,head);
// }

// Node* insertAtTail(Node* head,int value){
//     if(head==NULL){
//         return new Node(value);
//     }
//     Node* temp = head;

//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     Node* newNode= new Node(value);
//     temp->next=newNode;
//     return head;
// }


// Node * insertAtPosition(Node* head, int pos,int val){
//     if(head==NULL){
//         if(pos==1){
//             Node* head = new Node(val);
//         }
//         return NULL;
//     }
//     if(pos==1){
//         return new Node(val,head);
//     }

//     Node* temp = head;
//     int cnt=0;

//     while(temp!=NULL){
//         cnt++;
//         if(cnt==(pos-1)){
//             Node* x= new Node(val,temp->next);  //val->next=temp->next;
//             temp->next=x;
//             break;
//         }
//         temp=temp->next;
//     }
//     return head;
// }


// int main(){
//     vector<int> arr;
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);

//     Node* head = convertArr2LL(arr);
//     print(head);
//     Node* insertingAtHead= insertAtHead(head,9);
//     print(insertingAtHead);
//     Node * insertingAtTail = insertAtTail(head,100);
//     print(insertingAtTail);
//     Node * insertingAtPosition = insertAtPosition(head, 3, 122);
//     print(insertingAtPosition);
// }



// -----------------------------------------------------------------



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
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover= head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr);
        mover->next= temp;
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


Node* insertAthead(Node* head, int value){
    return new Node(value, head);
}


Node* insertAtTail(Node*head, int value){

    if(head==nullptr){
        return new Node(value);
    }
    Node* temp=head;

    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newvalue= new Node(value);
    temp->next= newvalue;

    return head;
}


Node* insertAtPosition(Node* head, int pos,int value){
    if(head==nullptr){
        if(pos==1){
            return new Node(value);
        }
        return head;
    }
    if(pos==1){
        return new Node(value, head);
    }

    Node* temp= head;
    int cnt=0;

    while(temp!=nullptr){
        cnt++;
        if(cnt==(pos-1)){
            Node* x =new Node(value,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
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

    Node* insertingAthead= insertAthead(head,89);
    print(insertingAthead);

    Node* insertingAtTail= insertAtTail(insertingAthead, 90);
    print(insertingAtTail);


    Node* insertingAtPos = insertAtPosition(insertingAtTail, 2, 788);
    print(insertingAtPos);
}