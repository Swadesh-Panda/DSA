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
        ListNode *temp = head, *curr = head;
        int l = 0;
        while(temp){
            l++;
            temp = temp->next;
        }
        int r = l - n, i=1;
        if(r == 0) return curr->next;
        while(i != r){
            i++;
            curr = curr->next;
        }
        curr->next = (curr->next)->next;
        return head;
    }
};
