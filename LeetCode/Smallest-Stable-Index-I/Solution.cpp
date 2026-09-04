1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int>minu(n);
6        minu[n-1]=nums[n-1];
7        for(int i=n-2; i>=0; i--){
8            minu[i]=min(nums[i],minu[i+1]);
9        }
10        int maxi=nums[0];
11
12        for(int i=0; i<nums.size(); i++){
13            maxi=max(nums[i],maxi);
14            if(maxi-minu[i]<=k){
15                return i;
16            }
17        }
18        return -1;
19    }
20};