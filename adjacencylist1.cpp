#include<bits/stdc++.h>
using namespace std;
int g[1000][1000];
main()
{
    int e,n,i,j,x,y;
    cin>>n>>e;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g[i][j]=0;
    }
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        g[x][y]=1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<"Node"<<" "<<i<<" :";
        for(j=1;j<=n;j++)
        {
            if (g[i][j]==1)
                cout<<j<<" ";
        }
        cout<<endl;
    }
}
