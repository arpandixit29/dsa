1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n=nums.size();
5        int max=INT_MIN;
6        long sum=0;
7        for(int i=0; i<n ;i++){
8            sum=sum+nums[i];
9
10            if(sum>max){
11                max=sum;
12            }
13            if(sum<0){
14                sum=0;
15            }
16           
17        }
18        return max;
19    }
20};