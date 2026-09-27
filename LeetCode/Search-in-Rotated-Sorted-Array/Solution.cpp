1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int lo = 0, hi = n - 1;
6
7        while (lo < hi) {
8            int mid = lo + (hi - lo) / 2;
9            if (nums[mid] > nums.back()) lo = mid + 1;
10            else hi = mid;
11        }
12
13        int rot = lo;
14        lo = 0, hi = n - 1;
15
16        while (lo <= hi) {
17            int mid = lo + (hi - lo) / 2;
18            int real = (mid + rot) % n;
19
20            if (nums[real] == target)
21                return real;
22
23            if (nums[real] < target) lo = mid + 1;
24            else hi = mid - 1;
25        }
26
27        return -1;
28    }
29};