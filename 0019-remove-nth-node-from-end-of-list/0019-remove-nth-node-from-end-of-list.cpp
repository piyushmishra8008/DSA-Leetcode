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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=0;
        ListNode* temp1=head;
        
        
        while(temp1!=NULL){
            sz++;
            temp1=temp1->next;
            
            
        }
        if(sz==n){
        ListNode* delete1=head;
        head=head->next;
        delete delete1;
        return head;
        }
        int pos=sz-n;
        ListNode* temp=head;
        ListNode* delete2;
        while(--pos){
            temp=temp->next;
        }
        delete2=temp->next;
        temp->next=temp->next->next;

        delete delete2;
        return head;
    }
};