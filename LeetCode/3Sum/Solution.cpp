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
16                if(nums[i]+nums[j]+nums[k]<0)
17                j++;
18                else if(nums[i]+nums[j]+nums[k]>0)
19                k--;
20                else{
21                    vector<int>trip{nums[i], nums[j], nums[k]};
22                    ans.push_back(trip);
23                    j++;
24                    k--;
25                    while(j<k&& nums[j]==nums[j-1])
26                    j++;
27                    while(j<k && nums[k]==nums[k+1])
28                    k--;
29                }
30            }
31        }
32        return ans;
33    }
34};