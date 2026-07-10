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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> vals;
        ListNode* curr = head;
        while(curr){
            if(vals.find(curr) == vals.end()){
                vals.insert(curr);
            } 
            else return true;
            curr = curr->next;
        }
        return false;
    }
};
