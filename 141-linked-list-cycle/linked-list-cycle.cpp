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
        ListNode* temp = head;
        unordered_map <ListNode* , int> freq;
        while(temp!=NULL){
            if(freq.find(temp)!=freq.end()) return true;
            freq[temp]++;
            temp=temp->next;
        }
        return false;
    }
};