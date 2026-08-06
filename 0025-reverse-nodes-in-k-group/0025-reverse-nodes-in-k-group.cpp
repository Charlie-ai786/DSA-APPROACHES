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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* findkthnode(ListNode* head,int k){
        while(head && --k){
            head=head->next;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* kthnode=findkthnode(temp,k);
            if(kthnode==NULL){
                if(prev){
                    prev->next=temp; 
                }    
                break;
            }
            ListNode* nextnode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);
            if(prev==NULL){
                head=kthnode;
            }else{
                prev->next=kthnode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};