1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size()-1;
5        int l=0, h=n;
6        int mid;
7        while(l<=h){
8            mid=l+(h-l)/2;
9            if(nums[mid]==target)
10            return mid;
11            else if(nums[l]<=nums[mid]){
12                if(nums[mid]>=target&&target>=nums[l]){
13                    h=mid-1;
14                }else
15                l=mid+1;
16            }else{
17                if(nums[mid]<=target&&nums[h]>=target){
18                    l=mid+1;
19                }else
20                h=mid-1;
21            }
22        }return -1;
23    }
24};