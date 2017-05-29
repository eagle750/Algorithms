#include <iostream>
#include<algorithm>
#define ll long long int
using namespace std;
ll a[2500][2500];
ll min(ll a,ll b,ll c)
{
    ll x=a>b?b:a;
    ll y=c>x?x:c;
    return y;
}
 
int main()
{
ll t,i,j;string s1,s2;
cin>>t;
while(t--)
{
    cin>>s1>>s2;
    ll l1,l2;
    l1=s1.length();
    l2=s2.length();
  for(i=0;i<=l1;i++)
        a[i][0]=i;
  for(j=0;j<=l2;j++)
       a[0][j]=j;
  for(i=1;i<=l1;i++)
  {
      for(j=1;j<=l2;j++)
      {
          if(s1[i-1]==s2[j-1])
            a[i][j]=a[i-1][j-1];
          else
            a[i][j]=1+min(a[i-1][j-1],a[i-1][j],a[i][j-1]);
      }
  }
    cout<<a[l1][l2]<<endl;
}
    return 0;
}