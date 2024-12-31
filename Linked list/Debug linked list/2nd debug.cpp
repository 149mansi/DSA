ListNode* middleNode(ListNode* head) {
        ListNode* last = head;
        ListNode* first = head;

        // while (first->next != NULL && last != NULL) {
        while (first->next != NULL && first!= NULL)
        
            last = last->next;
            first = first->next->next;
        }
    
        return last;
    }