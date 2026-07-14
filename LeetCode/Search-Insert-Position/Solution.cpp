1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n=nums.size()-1;
5        int m,l=0;
6        int h=n;
7        while(l<=h){
8            m=l+(h-l)/2;
9            if(target==nums[m])
10            return m;
11            else if(target> nums[m])
12            l=m+1;
13            else
14            h=m-1;
15        }
16        return l;
17    }
18};