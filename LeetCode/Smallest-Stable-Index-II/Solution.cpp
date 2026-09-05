1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        int a=nums[n-1];
6        vector<int>m(n);
7        m[n-1]=a;
8        for(int i=nums.size()-2; i>=0; i--){
9            a=min(a,nums[i]);
10            m[i]=a;
11        }
12        int b=nums[0];
13        int c=INT_MAX;
14        if(b-m[0]<=k)
15        c=min(c,0);
16
17        for(int i=1; i<nums.size(); i++){
18            b=max(nums[i], b);
19            if(b-m[i]<=k)
20            c=min(c,i);
21        }
22        if(c==INT_MAX)
23        return -1;
24        return c;
25    }
26};