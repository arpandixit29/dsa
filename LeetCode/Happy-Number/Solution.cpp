1class Solution {
2public:
3    long long ss(int n){
4        long long sum=0;
5        while(n!=0){
6            int i=n%10;
7            sum+=i*i;
8            n=n/10;
9        }
10        return sum;
11    }
12    bool isHappy(int n) {
13        long long slow=ss(n);
14        long long fast=ss(ss(n));
15        while(slow!=fast){
16            slow=ss(slow);
17            fast=ss(ss(fast));
18        }
19        return slow==1;
20    }
21};