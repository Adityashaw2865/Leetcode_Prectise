class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        int ans = 0;
        vector<int> anss;
        
        ListNode* curr = head->next;
        
        while (curr != NULL) {
            
            if (curr->val == 0) {
                anss.push_back(ans);
                ans = 0;
            }
            else {
                ans += curr->val;
            }
            
            curr = curr->next;
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        
        for (int x : anss) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        
        return dummy->next;
    }
};