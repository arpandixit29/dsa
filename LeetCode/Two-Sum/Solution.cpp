1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int>a;
5        for(int i=0; i<nums.size(); i++){
6            for(int j=i+1; j<nums.size(); j++){
7                if(nums[i]+nums[j]==target){
8                    a.push_back(i);
9                    a.push_back(j);
10                }
11                
12            }
13        }
14        return a;
15    }
16};