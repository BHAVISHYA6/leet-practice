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
    ListNode* middy(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;
        }
        return slow;
    }
    void reorderList(ListNode* head) {
        ListNode* mid = middy(head);
        stack<ListNode*> st;
        ListNode* temp1 = mid->next ;
        while(temp1 != NULL){
            st.push(temp1);
            temp1 = temp1->next;
        } 
        mid->next = NULL;
        temp1 = head;
        while(!st.empty()){
            ListNode* temp2 = st.top();
            ListNode* next = temp1->next;
            st.pop();
            temp1->next = temp2;
            temp2->next = next;
            temp1 = next;

        }
        
    }
};