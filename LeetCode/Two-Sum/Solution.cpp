1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        
5        map<int, int>a;
6        for(int i=0; i<nums.size(); i++){
7            int c=nums[i];
8            int b=target-c;
9            if(a.find(b)!=a.end())
10            return{a[b], i};
11            a[c]=i;
12        }
13        return{};
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47      /*  unordered_map<int,int> mp;
48
49        for(int i=0;i<nums.size();i++)
50        {
51            int complement = target - nums[i];
52
53            if(mp.count(complement))
54            {
55                return {mp[complement], i};
56            }
57
58            mp[nums[i]] = i;
59        }
60
61        return {};*/
62    }
63};