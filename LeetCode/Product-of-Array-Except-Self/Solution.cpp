1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n, 1);
6
7        for(int i = 1; i < n; i++){
8            ans[i] = ans[i-1] * nums[i-1];
9        }
10        int post = 1;
11        for(int i = n - 1; i >= 0; i--){
12            ans[i] *= post;
13            post *= nums[i];
14        }
15
16        return ans;
17    }
18};