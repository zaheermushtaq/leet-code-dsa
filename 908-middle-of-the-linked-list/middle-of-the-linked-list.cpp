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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        if(c==1) return head;
        int k;
        if(c%2==0) k=(c/2+1);
        else k=((c+1)/2);
        while(k!=1){
            k--;
            head=head->next;
        }
        return head;
    }
};