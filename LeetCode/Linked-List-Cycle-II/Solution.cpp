1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    /*ListNode* point(ListNode *head, ListNode*fast){
12        ListNode*temp=head;
13        while(temp!=NULL){
14            if(temp==fast)
15            return temp;
16
17            temp=temp->next;
18            fast=fast->next;
19        }
20        return temp;
21    }*/
22    ListNode *detectCycle(ListNode *head) {
23        ListNode* slow=head;
24        ListNode* fast=head;
25        while(fast!=NULL&& fast->next!=NULL){
26            fast=fast->next->next;
27            slow=slow->next;
28
29            if(fast==slow){
30                slow=head;
31                while(slow!=fast){
32                    slow=slow->next;
33                    fast=fast->next;
34                }
35                return slow;
36            }
37            
38        }
39        return NULL;
40    }
41};