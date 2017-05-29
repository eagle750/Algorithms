           #include <bits/stdc++.h>
            #define ll long long int
            using namespace std;
             int d[10003];bool tt[10005];
             int arr[555][555];
            int main()
            {
                ios_base::sync_with_stdio(0);
           int n,a,b,w,u,v,q;
           cin>>n;
           for(int i=0;i<500;i++)
          {
              d[i]=INT_MAX;
              tt[i]=false;
          }
          memset(arr,-1,sizeof(arr));
           for(int i=0;i<n;i++)
           {
               cin>>a>>b>>w;
               if(arr[a][b]>w||arr[a][b]==-1){
                arr[a][b]=w;arr[b][a]=w;}
           }
           cin>>u;
           d[u]=0;
           for(int i=0;i<n;i++)
           {
                for(int i=0;i<500;i++)
               {
                   if(arr[u][i]!=-1&&d[i]>arr[u][i]+d[u])
                    d[i]=d[u]+arr[u][i];
               }
               int min=INT_MAX; tt[u]=true;
               for(int i=0;i<500;i++)
               {
                   if(min>d[i]&&!tt[i])
                   {
                       min=d[i];
                       u=i;
                   }
               }
           }
           cin>>q;
           while(q--)
           {
               cin>>v;
               if(d[v]==INT_MAX) cout<<endl<<"NO PATH"<<endl;
               else
                cout<<endl<<d[v]<<endl;
           }
                return 0;
            }
 