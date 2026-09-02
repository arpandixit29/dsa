1class Solution {
2public:
3    int countPrimes(int n) {
4        if(n<=2)
5        return 0;
6        int c=1;
7        vector<bool>isprime (n ,true);
8        isprime[0]=false;
9        isprime[1]=false;
10
11        for(int i=4; i<isprime.size(); i=i+2){
12            isprime[i]=false;
13        }
14        for(int i=3; i*i<n; i=i+2){
15            if(isprime[i]){
16                for(int j=i*i; j<n; j+=2*i){
17                    isprime[j]=false;
18                }
19            }
20        }
21        for(int i=3; i<n; i=i+2){
22            if(isprime[i])
23            c++;
24        }
25        
26        
27        return c;
28    }
29};