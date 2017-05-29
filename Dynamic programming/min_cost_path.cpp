#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int minCost(int cost[100][90], int m, int n)
{
     int i, j;
     int tc[m][n];
     tc[0][0] = cost[0][0];
      for (i = 1; i <= m; i++)
        tc[i][0] = tc[i-1][0] + cost[i][0];
      for (j = 1; j <= n; j++)
        tc[0][j] = tc[0][j-1] + cost[0][j];
      for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            tc[i][j] = min(tc[i-1][j-1],min(
                           tc[i-1][j],
                           tc[i][j-1])) + cost[i][j];
     return tc[m][n];
}
 int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
 int main()
{
    int r,c,a[100][90];
    cin>>r>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin>>a[i][j];
    cout<<minCost(a, r-1, c-1);
   return 0;
}
