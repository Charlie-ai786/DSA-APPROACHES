/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail=head;
        int leng=1;
        if(head==NULL || k==0 || head->next==NULL) return head;

        while(tail->next!=NULL){
            ++leng;
            tail=tail->next;
        }
        k%=leng;
        if(k==0) return head;

        tail->next=head;
        ListNode* newtail=head;
        int cnt=leng-k;
        while(--cnt){
            newtail=newtail->next;
        }
        head=newtail->next;
        newtail->next=NULL;
        return head;
    }
};