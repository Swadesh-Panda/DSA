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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        ListNode *p = l1, *q = l2;
        while(p){
            v1.push_back(p->val);
            p = p->next;
        }
        while(q){
            v2.push_back(q->val);
            q = q->next;
        }
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        
        int x = 0, y = 0;
        for(int i=v1.size()-1, j=v2.size()-1; i>=0 || j>=0; i--, j--){
            if(i>=0){
                x += v1[i];
            }
            
            if(j>=0){
                x += v2[j];
            }
            
            x += y;
            
            if(x < 10){
                v3.push_back(x);
                y = 0;
            }
            else{
                v3.push_back(x%10);
                y = 1;
            }
            x = 0;
        }
        if(y==1){
            v3.push_back(1);
        }
        
        ListNode *l3 = new ListNode(v3[0]);
        ListNode *r = l3;
        for(int k=1; k<v3.size(); k++){
            r->next = new ListNode(v3[k]);
            r = r->next;
        }
        
        return l3;
    }
};