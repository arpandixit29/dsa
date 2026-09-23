1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        int m1=INT_MIN;
5        int m2=INT_MIN;
6        int m3= INT_MIN;
7        int mi1=INT_MAX;
8        int mi2=INT_MAX;
9        for(int i=0; i<nums.size(); i++){
10            if(nums[i]>m1){
11                m3=m2;
12                m2=m1;
13                m1=nums[i];
14            }else if(nums[i]>m2){
15                m3=m2;
16                m2=nums[i];
17            }else if(nums[i]>m3){
18                m3=nums[i];
19            }
20            if(nums[i]<mi1){
21                mi2=mi1;
22                mi1=nums[i];
23            }else if(nums[i]<mi2){
24                mi2=nums[i];
25            }
26        }
27        return max(m1*m2*m3, mi1*mi2*m1);
28    }
29};