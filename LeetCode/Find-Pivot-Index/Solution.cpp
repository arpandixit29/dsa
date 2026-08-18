1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int left =0;
5        int sum=0;
6        for(int i=0; i<nums.size(); i++){
7            sum+=nums[i];
8        }
9        for(int i=0; i<nums.size(); i++){
10            
11            if(left==sum-left-nums[i])
12            return i;
13            left+=nums[i];
14        }
15        return -1;
16
17    }
18};