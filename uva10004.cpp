#include<bits/stdc++.h>
using namespace std;
int bfs();
int g[300][300],visit[300][300],color[500],n,e,temp;
main()
{
    int i,j,x,y;
    while(cin>>n)
    {
        if (n==0)break;
        cin>>e;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                g[i][j]=0;
                visit[i][j]=0;

            }
        }
        for(i=0;i<e;i++)
        {
            cin>>x>>y;
            if (i==0)
            {
                temp=x;
            }
            g[x][y]=1;
            if (x!=y)
                g[y][x]=1;
        }
        for(i=0;i<n;i++)
        {

            color[i]=-1;


        }
        bfs();
    }
}
int bfs()
{
    int p,i,flag,t;
    queue<int>q;
    q.push(0);

    //visit[temp]=1;
    flag=0;
    visit[0][0]=1;
    color[temp]=0;
    while(!q.empty())
    {

        p=q.front();
        t=p;
        q.pop();
        for(i=0;i<n;i++)
        {
            if (g[p][i]==1&&(visit[p][i]==0||visit[i][p]==0))
            {
                if (color[i]!=color[p])
                {
                    if (color[i]==-1){
                            if (color[p]==1)
                        color[i]=0;
                    else color[i]=1;}
                    flag=0;
                    q.push(i);
                    visit [p][i]=1;
                    visit[i][p]=1;

                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }

        if (flag==1)
            break;
    }
    if (flag==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;

}
