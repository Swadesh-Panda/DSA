#include<bits/stdc++.h>
using namespace std;
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode* newNode = new ListNode(-1);
        ListNode* temp = newNode;
        
        while(l1 and l2){
            int val = c + l1->val + l2->val;
            c = val/10;
            l1->val = val%10;
            temp->next = l1;           
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
         
        if(l1){             
            while(l1){
                int val = l1->val + c;
                c = val/10;
                l1->val = val%10;
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
             
        }else{
            while(l2){
                int val = l2->val + c;
                c = val/10;
                l2->val = val%10;
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }            
        }
        
        if(c > 0){
            temp->next = new ListNode(c);
        }
        
        return newNode->next;
    }
};