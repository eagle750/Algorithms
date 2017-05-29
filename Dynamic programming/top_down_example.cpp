#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#include<math.h>
#define ll long long int
using namespace std;
ll a[200][200];
ll dp[200][200];
ll l,w;
int main()
{
    ll t,i,j,maximum,c;
    s(t);
    while(t--)
    {
        s(l);s(w);
        for(i=0;i<l;i++)
        for(j=0;j<w;j++)
        s(a[i][j]);
        maximum=c=0;
        for(i=0;i<l;i++)
        {
          for(j=0;j<w;j++)
    {
        if(i==0)
            dp[i][j]=a[i][j];
        else
        {
        if(j==0)
            dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
            else
            if(j==w-1)
            dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
            else
        dp[i][j]=a[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
    }
     if(dp[i][j]>maximum)
            maximum=dp[i][j];
        }
    }
      p(maximum);
    }
    return 0;
}
 