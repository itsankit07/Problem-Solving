 -- ITTERATIVE Approach ----
   
   T.C - O(N)
   S.C - O(1)
   
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        ListNode *next = NULL;
        ListNode *prev = NULL;
        
        ListNode *temp = head;
        
        while(temp!=NULL)
        {
           next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
                
    }
};


----- Recursive Approach -----
  
    T.C - O(N)
    S.C - O(N), Function call stack space

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
           if(head==NULL || head ->next == NULL )
            return head;
        ListNode *Smallans = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return Smallans;
     }
};
