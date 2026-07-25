1class Solution {
2public:
3    int maxProduct(int n) {
4        int g=INT_MIN;
5        int sg=INT_MIN;
6        while(n!=0){
7            int a=n%10;
8            int i=0;
9            if(a>g){
10                sg=g;
11                g=a;
12                n=n/10;
13                continue;
14            }
15            if(a>sg)
16            sg=a;
17            n=n/10;
18        }
19        return g*sg;
20    }
21};