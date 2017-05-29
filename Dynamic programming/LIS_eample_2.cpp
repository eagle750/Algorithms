#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
 
int main()
{
ll t,m,n,a[100004];
cin>>t;
while(t--)
{
    cin>>n>>m;
     int dp[100004]={0};
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=1;i<n;i++)
    {
        for(ll j=0;j<i;j++)
        {
            if((a[j]>a[i]||j==m)&&dp[i]<dp[j]+1)
               dp[i]=dp[j]+1;
        }
    }
    ll max=0;
    for(ll i=0;i<n;i++)
        if(dp[i]>max)
        max=dp[i];
    cout<<max+1<<endl;
}
    return 0;
}