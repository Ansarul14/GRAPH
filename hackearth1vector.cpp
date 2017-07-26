#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
     ll  n,m,i,j,x,y,q,p,flag;
     vector<ll>g[1005];
     while(cin>>n>>m)
     {
         for(i=1;i<=m;i++)
         {
             cin>>x>>y;
             g[x].push_back(y);
         }
        cin>>q;
        for(p=1;p<=q;p++)
        {
            cin>>x>>y;
            for(i=0;i<g[x].size();i++)
            {
                flag=0;
                if (g[x][i]==y){
                    cout<<"YES"<<endl;break;}
                    else
                    {
                        flag=1;
                    }
            }
            if (flag==1)
                cout<<"NO"<<endl;
        }
     }
}
