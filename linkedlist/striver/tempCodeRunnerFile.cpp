bool checkifpresent(Node* finaldata,int value){

    Node* temp = finaldata;

    while(temp!=nullptr){
        if(temp->data==value){
            return 1;
        }

        return 0;
    }
}