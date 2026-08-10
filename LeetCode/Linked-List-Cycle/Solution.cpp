1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9/**
10 * Definition for singly-linked list.
11 * struct ListNode {
12 *     int val;
13 *     ListNode *next;
14 *     ListNode(int x) : val(x), next(NULL) {}
15 * };
16 */
17class Solution {
18public:
19    bool hasCycle(ListNode *head) {
20        ListNode* slow=head;
21        ListNode* fast=head;
22        while(fast!=NULL&&fast->next!=NULL){
23            fast=fast->next->next;
24            slow=slow->next;
25            if(fast==slow)
26            return true;
27            
28        }
29        return false;
30    }
31};