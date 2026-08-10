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
20        map<ListNode*, int>mp;
21        ListNode* temp=head;
22        int i=1;
23
24        while(temp!=NULL){
25            if(mp.find(temp)!=mp.end())
26            return true;
27
28            mp[temp]=i++;
29            temp=temp->next;
30            
31            
32        }
33        return false;
34    }
35};