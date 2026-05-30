/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  int length(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int L1=length(headA);
        int L2=length(headB);
        int d=0;
        ListNode* ptr1;
        ListNode* ptr2;
        if(L1>=L2){
            ptr1=headA;
            ptr2=headB;
            d=L1-L2;
        }else if(L1<L2){
            ptr1=headB;
            ptr2=headA;
            d=L2-L1;

        }
        while(d){
            ptr1=ptr1->next;
            d--;
        }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;

    }
};