Approach 1: 

Using length of linked list

In this approach, we first traverse the linked list to find its length. We then traverse the list again to find the middle node----------
  
  
int findMiddle1(Node* head) {
    int length = 0
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    int middle = length / 2;
    temp = head;
    for (int i = 0; i < middle; i++) {
        temp = temp->next;
    }
    return temp->data;
}  

Approach 2: 

-> Using two pointers

-> In this approach, we use two pointers, slow_ptr and fast_ptr, to traverse the linked list. 
   The slow_ptr moves one node at a time, while the fast_ptr moves two nodes at a time.
   When the fast_ptr reaches the end of the list, 
   the slow_ptr will be pointing to the middle node.


class Solution{
    public:
    int getMiddle(Node *head)
    {
        Node * fast = head;
        Node * slow = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast = fast ->next->next;
        }
        return slow->data;
    }
};
