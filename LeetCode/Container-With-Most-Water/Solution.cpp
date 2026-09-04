1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left=0;
5        int right=height.size()-1;
6        int ans=0;
7        while(left<right){
8            int width=right-left;
9            int h=min(height[left], height[right]);
10            ans=max(ans,width*h);
11
12            if(height[left]>height[right])
13            right--;
14            else
15            left++;
16        }
17        return ans;
18    }
19};