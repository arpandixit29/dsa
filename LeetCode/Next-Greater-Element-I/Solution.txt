1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        stack<int>a;
5        map<int,int>b;
6        vector<int>ans;
7        for(int i=nums2.size()-1; i>=0; i--){
8            while(!a.empty() && nums2[i]>=nums2[a.top()]){
9                a.pop();
10            }if(a.empty()){
11                b[nums2[i]]=-1;
12            }else{
13                b[nums2[i]]=nums2[a.top()];
14            }
15            a.push(i);
16        }for(int i=0; i<nums1.size(); i++){
17            
18            ans.push_back(b[nums1[i]]);
19            
20        }
21        return ans;
22    }
23};