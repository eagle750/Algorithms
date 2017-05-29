#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[], int n, int sum)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);

   return isSubsetSum(set, n-1, sum) ||
                        isSubsetSum(set, n-1, sum-set[n-1]);
}
 int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n+1];
    for(int i=0;i<n;i++)  cin>>a[i];

  isSubsetSum(a,n,sum) == true?cout<<"YES"<<endl:cout<<"NO"<<endl;
  return 0;
}
