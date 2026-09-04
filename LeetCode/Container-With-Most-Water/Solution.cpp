1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left=0;
5        int right=height.size()-1;
6        int ans=0;
7        while(left<right){
8            int width=right-left;
9            int h=min(height[left], height[right]);
10
11            int area=width*h;
12            ans=max(ans,area);
13
14            if(height[left]>height[right])
15            right--;
16            else
17            left++;
18        }
19        return ans;
20    }
21};