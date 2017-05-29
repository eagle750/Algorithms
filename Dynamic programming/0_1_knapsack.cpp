#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio();
      ll n,t,e,temp;
      cin>>t;
      while(t--)
      {
        vector<ll>time,elist,ans;
        cin>>e>>n;
        elist.clear();
        time.clear();
        for(ll i=0;i<e;i++)
            ans.push_back(0);
        for(ll i=0;i<n;i++)
        {
           cin>>temp;
           elist.push_back(temp);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            time.push_back(temp);
        }
        ll x;
        for(ll i=1;i<=e;i++)
        {
            ans[i]=ans[i-1];
            for(ll j=0;j<n;j++)
            {
                if(i>=elist[j])
                {
                ans[i]=max(ans[i],ans[i-elist[j]]+time[j]);
                }
            }
        }
        cout<<ans[e]<<endl;
      }
    return 0;
}
 