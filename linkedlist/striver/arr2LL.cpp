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

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;


    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next= temp;
        mover=temp;
    }

    return head;
}

int  LengthofLL(Node* finaldata){
    int cnt=0;

    Node* temp = finaldata;

    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }

    return cnt;
}

int checkifpresent(Node* finaldata,int value){

    Node* temp = finaldata;

    while(temp!=nullptr){
        if(temp->data==value){
            return 1;
        }
        return 0;
    }
}

int main(){
    vector <int> arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(54);


    Node* finaldata = convertArr2LL(arr);

    Node*temp= finaldata;


    cout<<"all elements"<<endl;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


    int length = LengthofLL(finaldata);
    cout<<length<<endl;


    cout<<checkifpresent(finaldata,3231)<<endl;
}