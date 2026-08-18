1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int be=nums[0];// best
5        int w=nums[0];// negative ke liye worst 
6        int ans=nums[0];
7        for(int i=1; i<nums.size(); i++){
8            int a=nums[i]* be;
9            int b=nums[i]* w;
10            int c= nums[i];
11            be=max(a,max(b,c));
12            w=min(a,min(b,c));
13            ans=max(ans,be);
14        }
15        return ans;
16    }
17};