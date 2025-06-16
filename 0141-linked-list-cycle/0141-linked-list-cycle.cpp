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
    bool hasCycle(ListNode *head) {
        if(head && head->next==NULL)return false;
        ListNode*sp=head;
        ListNode *fp=head;
        while(sp && fp){
            sp=sp->next;
            
            fp=fp->next;
            if(fp)fp=fp->next;
            if(sp==fp){
                return true;
            }
        }
        return false;
    }
};