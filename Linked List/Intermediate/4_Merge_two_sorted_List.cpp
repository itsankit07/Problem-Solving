Approach 1: Iterative Solution

The first approach is to iterate through both linked lists, comparing the values at each node and building a new merged linked list. This approach has a time complexity of O(m + n), where m and n are the lengths of the input linked lists. The space complexity is O(m + n), as we create a new linked list to hold the merged elements.
  
  
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;
    
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    
    if (l1 != nullptr) {
        tail->next = l1;
    }
    
    if (l2 != nullptr) {
        tail->next = l2;
    }
    
    return dummy->next;
}


Approach 2: Recursive Solution

The second approach is to use recursion to merge the linked lists. This approach has a time complexity of O(m + n) and a space complexity of O(m + n), 
as we create new linked list nodes during the recursion.
  
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) {
        return l2;
    }
    
    if (l2 == nullptr) {
        return l1;
    }
    
    if (l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}


Approach 3: In-Place Solution

The third approach is to modify one of the input linked lists to hold the merged elements. 
This approach has a time complexity of O(m + n) and a space complexity of O(1), as we only modify the existing linked lists.
  
  
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) {
        return l2;
    }
    
    if (l2 == nullptr) {
        return l1;
    }
    
    ListNode* head = l1->val < l2->val ? l1 : l2;
    ListNode* tail = head;
    
    if (head == l1) {
        l1 = l1->next;
    } else {
        l2 = l2->next;
    }
    
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    
    if (l1 != nullptr) {
        tail->next = l1;
    }
    
    if (l2 != nullptr) {
        tail->next = l2;
    }
    
    return head;
}
