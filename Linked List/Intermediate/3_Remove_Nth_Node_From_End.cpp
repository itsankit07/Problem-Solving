class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

//  APPROACH 1-

        ListNode * temp = head;
        int length =0;
        
        while(temp)
        length++,temp=temp->next;
        
        if(length==n)
            return head->next;
            
        int k = length-n-1;
        
        ListNode *slow = head;
        
        while(k--)
        {
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return head;

        
//         APPROACH 2---------------
        
        ListNode * fast = head;
        ListNode * slow = head;
        
        for(int i =1;i<=n;i++)
            fast = fast->next;
        
        if(fast == NULL) return head->next;
        
        while(fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        
        return head;
            
        
    }
};
