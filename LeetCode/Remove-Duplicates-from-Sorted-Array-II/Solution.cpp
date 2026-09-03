1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.size() <= 2) {
5            return nums.size();
6        }
7        int index = 2; 
8        for (int i = 2; i < nums.size(); i++) { 
9            if (nums[i] != nums[index - 2]) {
10                nums[index] = nums[i]; 
11                index++;               
12            }
13        }
14        return index; 
15    }
16};
17
18
19