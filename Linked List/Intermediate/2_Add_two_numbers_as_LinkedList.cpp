Add two numbers given as a linked list --
  
TC: O(m + n), Where m and n are numbers of nodes in first and second lists respectively. The lists need to be traversed only once.
SC: O(m + n), A temporary linked list is needed to store the output number
  
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

            ListNode* head=NULL;
            ListNode* tail=NULL;
            int carry =0;
            
          while(l1!=NULL || l2!=NULL || carry)
          {
              int sum =0;
              if(l1!=NULL)
              {
                  sum += l1->val;
                  l1 = l1->next;
              }
              
              if(l2!=NULL)
              {
                  sum += l2->val;
                  l2 = l2->next;
              }
              
              sum+=carry;
              
              carry = sum/10;
              
               ListNode* newnode=new ListNode(sum%10);
              
              if(head == NULL)
              {
                  head = newnode;
                  tail = newnode;
              }
              else
              {
                  tail->next = newnode;
                  tail = newnode;
              }
              
          }
      
         return head;
    }
};
