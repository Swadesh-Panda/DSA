class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {       
        int t = 0;        
        ListNode* temp = head;
        while(temp){
            t++;
            temp = temp->next;
        }
        n = t - n;
        ListNode* newNode = new ListNode(-1,head);
        temp = head;
        ListNode* prev = newNode;
        while(n--){
            prev = temp;
            temp = temp->next;            
        }  
        prev->next = temp->next;        
        return newNode->next;
    }
};