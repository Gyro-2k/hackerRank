//insert node at end

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *temp=NULL;
    temp = new SinglyLinkedListNode(data);
    temp->next = llist;
    return temp;
}
