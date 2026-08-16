1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        int a = 0;
5        int b = 0;
6        int c = 0;
7        for (int i : stones) {
8            if (i % 3 == 0) {
9                a++;
10            }
11            else if (i % 3 == 1) {
12                b++;
13            }
14            else {
15                c++;
16            }
17        }
18        if (a % 2 == 0) {
19            return b > 0 && c > 0;
20        }
21        return abs(b - c) > 2;
22    }
23};