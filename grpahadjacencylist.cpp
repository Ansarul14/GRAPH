#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int>v[100];
    int n,m,x,y,i,j,e;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
