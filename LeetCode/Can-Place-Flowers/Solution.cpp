1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int c=0;
5        int j=flowerbed.size()-1;
6        if(j==0){
7            if(flowerbed[0]==0){
8                flowerbed[0]=1;
9                c++;
10            }
11            
12        }
13        if(j>=1){
14            if(flowerbed[0]==0&&flowerbed[1]==0){
15                flowerbed[0]=1;
16                c++;
17            }
18            if(flowerbed[j]==0&&flowerbed[j-1]==0){
19                flowerbed[j]=1;
20                c++;
21            }
22        }
23        
24        for(int i=1; i<flowerbed.size()-1; i++){
25            if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
26                flowerbed[i]=1;
27                c++;
28            }
29        }
30        if(c>=n)
31        return true;
32        return false;
33    }
34};