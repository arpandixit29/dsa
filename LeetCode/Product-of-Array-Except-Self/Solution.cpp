1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n, 1);
6        int pre=1;
7
8        for(int i=0; i<n; i++){
9            ans[i]=pre*ans[i];
10            pre=pre*nums[i];
11        }
12        int post=1;
13        for(int i=n-1; i>=0; i--){
14            ans[i]=post*ans[i];
15            post=post*nums[i];
16        }
17        return ans;
18    }
19};