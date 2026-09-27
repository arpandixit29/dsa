1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n= heights.size();
5        int ans=INT_MIN;
6        vector<int>left(n), right(n);
7        stack<int>st;
8        for(int i=0; i<n; i++){
9            while(!st.empty() && heights[st.top()]>=heights[i]){
10                st.pop();
11            }
12            if(st.empty())
13            left[i]=-1;
14            else
15            left[i]=st.top();
16            st.push(i);
17        }
18        while(!st.empty())
19        st.pop();
20        for(int i=n-1; i>=0; i--){
21            while(!st.empty() && heights[st.top()]>=heights[i]){
22                st.pop();
23            }
24            if(st.empty())
25            right[i]=n;
26            else
27            right[i]=st.top();
28            st.push(i);
29        }
30        for(int i=0; i<n; i++){
31            int w=right[i]- left[i]-1;
32            int h=heights[i];
33            ans=max(ans, w*h);
34
35        }
36        return ans;
37    }
38};