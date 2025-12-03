void correct_node() {
    node* temp1 = head;
    while(temp1->next != temp1->prev) {
        temp1 = temp1->next;
    }
    node* temp2 = tail;
    while(temp2->prev != temp1) {
        temp2 = temp2->prev;
    }

    temp1->next = temp2;
}
//code for corrcting randomly pointing node
