1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4        for (int i = n; ; i++) {
5            int p = 1;
6            int x = i;
7            while (x > 0) {
8                p = p*(x % 10);
9                x=x/10;
10            }
11            if (p % t == 0)
12            return i;
13        }
14    }
15};