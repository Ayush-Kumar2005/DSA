class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* c = new ListNode(0);
        ListNode* temp3 = c;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                temp3->next=list1;
                temp3=temp3->next;
                list1=list1->next;
            }
            
            else{
                temp3->next=list2;
                temp3=temp3->next;
                list2=list2->next;
            }
        }

        if(list1==NULL){
            temp3->next = list2;
        }
        else{
            temp3->next = list1;
        }

        return c->next;
    }
};