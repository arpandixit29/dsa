1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4
5        int n = heights.size();
6
7        vector<int> left(n), right(n);
8        stack<int> st;
9
10        for (int i = 0; i < n; i++) {
11            while (!st.empty() && heights[st.top()] >= heights[i])
12                st.pop();
13            if (st.empty())
14                left[i] = -1;
15            else
16                left[i] = st.top();
17            st.push(i);
18        }
19
20        while (!st.empty())
21            st.pop();
22        for (int i = n - 1; i >= 0; i--) {
23            while (!st.empty() && heights[st.top()] >= heights[i])
24                st.pop();
25            if (st.empty())
26                right[i] = n;
27            else
28                right[i] = st.top();
29
30            st.push(i);
31        }
32        int ans = 0;
33        for (int i = 0; i < n; i++) {
34            int width = right[i] - left[i] - 1;
35            ans = max(ans, heights[i] * width);
36        }
37        return ans;
38    }
39};