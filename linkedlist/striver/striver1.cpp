// #include <iostream>
// #include <vector>
// using namespace std;
// struct Node{
//     public:
//     int data;
//     Node *next;

//     public:
//     Node(int data1, Node *next1){
//         data=data1;
//         next=next1;
//     }

//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };


// int main(){
//     vector <int> arr;
//     arr.push_back(2);
//     arr.push_back(5);
//     arr.push_back(8);
//     arr.push_back(7);
//     Node *y = new Node(arr[0], nullptr);
//     cout<< y->data<<endl;
//     cout<<y->next<<endl;
// }

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
        next = next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};


Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[1]);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

int main(){
    vector <int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);

    Node* finaldata= convertArr2LL(arr);
    cout<<finaldata->data<<endl;


    // Node* y = new Node(arr[0], nullptr);
    // Node  g = Node(arr[0], nullptr);

    // cout<<y<<endl;
    // cout<<y->data<<endl;
    // cout<<y->next;
    // cout<<g.data<<endl; cout<<g.next<<endl;
}