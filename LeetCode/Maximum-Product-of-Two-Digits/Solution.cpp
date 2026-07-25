1class Solution {
2public:
3    int maxProduct(int n) {
4        int g=INT_MIN;
5        int sg=INT_MIN;
6        while(n!=0){
7            int a=n%10;
8            if(a>g){
9                sg=g;
10                g=a;
11                n=n/10;
12                continue;
13            }
14            if(a>sg)
15            sg=a;
16            n=n/10;
17        }
18        return g*sg;
19    }
20};