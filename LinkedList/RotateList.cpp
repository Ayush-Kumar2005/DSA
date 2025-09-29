ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL) return head;
    ListNode* temp = head;
    ListNode* tail = head; // a ListNode to store tail node

    // 1. First find length of LL
    int len = 0;
    while(temp != NULL){
        len++;
        if(temp->next == NULL){
            tail = temp; // Assigning value to tail
        }
        temp = temp->next;
    }

    // 2. Adjust k if it's greater than len
    k = k % len;

    // 3. Reset temp to head
    temp = head;

    // 4. Traverse temp till (len-k)th position
    for(int i = 1; i < (len - k); i++){
        temp = temp->next;
    }

    // 5. Last step
    tail->next = head;
    head = temp->next;
    temp->next = NULL;

    return head;
}

