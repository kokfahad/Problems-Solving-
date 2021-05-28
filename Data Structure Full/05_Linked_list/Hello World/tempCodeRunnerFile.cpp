 void insertAfter(node *prev_node, int newData){
    node *newNode= new node();
    newNode->data=newData;
    newNode->next=prev_node->next;
    prev_node->next=newNode;

}