include <bits/stdc++.h>
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define ll long long int
using namespace std;
map<ll,ll>dp;
 ll f( ll n){
    if(n==0) return 0;
 
    if(dp[n]!=0) return dp[n];
 
    ll aux=f(n/2)+f(n/3)+f(n/4);
 
    if(aux>n) dp[n]=aux;
    else dp[n]=n;
 
    return dp[n];
}
 
int main()
{
    ll n;
while(s(n)==1)
      p(f(n));
 
    return 0;
}
 