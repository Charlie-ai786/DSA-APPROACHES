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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* x=headA;
        ListNode* y=headB;
        while(x!=y){
            y=y->next;
            x=x->next; 
            if(x==y){
                return x;
            }           
            if(x==NULL){
                x=headB;
            }
            if(y==NULL){
                y=headA;
            }
        }
        return x;
    }
};