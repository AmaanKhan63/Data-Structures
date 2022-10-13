/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head ==NULL || head->next == NULL) 
            return 0;
        
        ListNode* f = head;
        ListNode* s = head;
        
        while(f->next && f->next->next)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
            {
                ListNode* entry = head ; // node where the cycle begins        
                   while(entry != s) 
             {
                 s = s-> next ;
                entry = entry-> next ;
                }
            return entry ;  
            }
        }
        return NULL;
    }
};
