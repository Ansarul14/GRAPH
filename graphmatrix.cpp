#include<bits/stdc++.h>
using namespace std;
main()
{
    int g[10][10],i,j,e,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g[i][j]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>g[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    int x,y;
    cin>>x>>y;
    if (g[x][y]==1)
        cout<<"There is an edge.."<<endl;
    else
        cout<<"There is not an edge.."<<endl;
}
