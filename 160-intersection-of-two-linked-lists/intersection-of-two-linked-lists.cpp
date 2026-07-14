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
    ListNode *coll(ListNode *headA, ListNode *headB , int d){
        while(d != 0){
            headA = headA->next;
            d--;
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int cntA = 0;
        int cntB=0;
        while(temp!= NULL){
            cntA++;
            temp = temp->next;
        }
        temp = headB;
        while(temp != NULL){
            cntB++;
            temp = temp->next;

        }
        if(cntB <cntA){
            return coll(headA , headB , cntA-cntB);
        }else{
            return coll(headB , headA , cntB-cntA);
        }

    }
};