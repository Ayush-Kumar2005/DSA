#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

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

// Function to print the linked list
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val;
        if(head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Manually creating nodes
    ListNode* a = new ListNode(10);
    ListNode* b = new ListNode(20);
    ListNode* c = new ListNode(30);
    ListNode* d = new ListNode(40);
    ListNode* e = new ListNode(50);

    // Linking nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    cout << "Original List: ";
    printList(a);

    ListNode* rotatedHead = rotateRight(a, 2);

    cout << "Rotated List (k = 2): ";
    printList(rotatedHead);

    return 0;
}
