1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int l=0;
5        int sl=0;
6        for(int i=0; i<nums.size(); i++){
7            if(l<nums[i]){
8                sl=l;
9                l=nums[i];
10                continue;
11            }
12            if(sl<nums[i])
13            sl=nums[i];
14        }
15        return (l-1)*(sl-1);
16    }
17};