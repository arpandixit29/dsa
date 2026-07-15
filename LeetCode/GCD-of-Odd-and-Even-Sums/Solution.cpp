1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4        int es=0;
5        int os=0;
6        for (int i = 1; i <= n; i++) {
7            os += (2 * i - 1);
8            es += (2 * i);
9        }
10        int a,b;
11        if(os>es){
12            a=os;
13            b=es;
14        }else{
15            a=es;
16            b=os;
17        }
18        while (b != 0) {
19        int rem = a % b;
20        a = b;
21        b = rem;
22        }
23        return a;
24    }
25};