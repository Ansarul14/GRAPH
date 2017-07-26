#include<bits/stdc++.h>
using namespace std;
int dfs();
int g[100][100],vis[100],n,e;
main()
{
    int i,j,m,x,y;
    cin>>n>>e;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g[i][j]=0;
    }
    for(i=1;i<=n;i++)
        vis[i]=0;
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        g[x][y]=1;
        if (x!=y)
            g[y][x]=1;
    }
    dfs();
}
int dfs()
{
    int m,p,flag=0,i;
    stack<int>q;
    q.push(1);
    vis[1]=1;
    cout<<q.top()<<" ";
    while(!q.empty())
    {
        flag=0;
        m=q.top();

        for(i=1;i<=n;i++)
        {
            if  (g[m][i]==1&&vis[i]==0)
            {
                q.push(i);
                 cout<<q.top()<<" ";
                vis[i]=1;
                flag=0;break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
            q.pop();
    }

}
