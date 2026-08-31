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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ind;
        if(head->next == NULL || head->next->next == NULL){
            return {-1 , -1};
        }
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* succ = head->next->next;
        int n =1;
        while( succ != NULL){
            if((temp->val > succ->val && temp->val > prev ->val) || (temp->val < succ->val && temp->val < prev->val)){
                ind.push_back(n);
            }
            prev = temp;
            temp = succ;
            succ = succ->next;
            n++;
        }
        if(ind.size() < 2) return {-1, -1};
        int maxi = ind[ind.size()-1] - ind[0];
        int mini = INT_MAX;
        for(int i =1; i< ind.size(); i++){
                mini = min(mini , ind[i]- ind[i-1]);
            }
        
        return {mini , maxi};
        
    }
};