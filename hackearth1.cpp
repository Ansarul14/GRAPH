#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll g[1006][1005];
int main()
{
    ll n,m,i,j,x,y;
    while(cin>>n>>m)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                g[i][j]=0;
        }
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            g[x][y]=1;
        }
        ll q;
        cin>>q;
        for(i=1;i<=q;i++)
        {
            cin>>x>>y;
            if (g[x][y]==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

}
