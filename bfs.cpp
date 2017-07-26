#include<bits/stdc++.h>
using namespace std;
int bfs();
int g[100][100],vis[100],e,n,level[100];
main()
{
    int m,p,x,y,i,j;
    cin>>n;
    e=n-1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g[i][j]=0;
    }
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        g[x][y]=1;
        if (x!=y)
            g[y][x]=1;
    }
    for(i=1;i<=n;i++)
        vis[i]=0;
    bfs();
}
int bfs()
{
    int m,i,p,x;
    queue<int>q;
    q.push(1);
    vis[1]=1;
    level[1]=0;
    p=0;
    while(!q.empty())
    {
        m=q.front();
        //cout<<m<<" ";
        q.pop();
        for(i=1;i<=n;i++)
        {
            if (g[m][i]==1&&vis[i]==0)
            {
                q.push(i);
                vis[i]=1;
                level[i]=level[m]+1;
            }
        }


    }
    cin>>x;
    //cout<<endl;
    int c=0;
    for(i=1;i<=n;i++)
    {
        //cout<<i<<" "<<level[i]<<endl;
        if (level[i]==x)
            c++;
    }
    cout<<c-1<<endl;
}
