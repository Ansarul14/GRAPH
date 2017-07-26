#include<bits/stdc++.h>
using namespace std;
int g[1001][1001];
//vector<int>g[100];
main()
{
   int i,j,n,m,q,a,b,x,y;
   cin>>n>>m;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           g[i][j]=0;
          // g[i].push_back(0);
       }
   }
   for(i=1;i<=m;i++)
   {
       cin>>x>>y;
       //v[x]
       g[x][y]=1;
       if (x!=y)
       g[y][x]=1;
   }
   cin>>q;
   for(i=1;i<=q;i++)
   {
       cin>>a>>b;
       if (g[a][b]==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
}
