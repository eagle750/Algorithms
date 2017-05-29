#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t,ans;
    cin>>t;
    int a[100003];
    while(t--)
    {
     int n;
     cin>>n;ans=0;
     int l1[100003]={0},l2[100003]={0};
     for(int i=0;i<n;i++)
        cin>>a[i];
     for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j]&&l1[j]<l1[i]+1)
            l1[j]=l1[i]+1;
        for(int i=n-1;i>=0;i--)
            for(int j=i-1;j>=0;j--)
            if(a[i]<a[j]&&l2[j]<l2[i]+1)
            l2[j]=l2[i]+1;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(l1[x]+l2[x]<l1[i]+l2[i])
                x=i;
        }
        cout<<l1[x]+l2[x]+1<<endl;
    }
    return 0;
}