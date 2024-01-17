#include <iostream>
using namespace std;

class Node{
    int data;
    Node * nextptr;

    Node(int dataValue =0){
        this->data=dataValue;
        this->nextptr=NULL;
    }
};


