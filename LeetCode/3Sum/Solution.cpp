1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>>ans;
5        int n=nums.size();
6
7        sort(nums.begin(), nums.end());
8
9        for(int i=0; i<nums.size(); i++){
10            if(i>0 && nums[i]==nums[i-1]){
11                continue;
12            }
13            int j=i+1;;
14            int k=n-1;
15            while(j<k){
16                int sum=nums[i]+ nums[j]+ nums[k];
17                if(sum<0)
18                j++;
19                else if(sum>0)
20                k--;
21                else{
22                    ans.push_back({nums[i], nums[j], nums[k]});
23                    j++;
24                    k--;
25                    while(j<k&& nums[j]==nums[j-1])
26                    j++;
27                }
28            }
29        }
30        return ans;
31    }
32};