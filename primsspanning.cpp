#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
    ll to,weight;
};
ll n,e,cst[100005];
bool visited[100005];
map<ll,vector<node> >nodes;
priority_queue<node>PQ;
ll prims()
{
    for (ll i=1;i<=n;i++)
        cst[i]=INT_MAX,visited[i]=0;
    cst[1] = 0;
    node nn;
    nn.to = 1,nn.weight=0;
    PQ.push(nn);
    ll ans = 0;
    while(!PQ.empty())
    {
        node tmp = PQ.top();
        PQ.pop();
        if (visited[tmp.to]==1)
            continue;
        visited[tmp.to]=1;
        ans+=tmp.weight;
        for (ll i=0;i<nodes[tmp.to].size();i++)
        {
            node tm = nodes[tmp.to][i];
            if (visited[tm.to]==1)
                continue;
            if (tm.weight<cst[tm.to])
            {
                nn.to = tm.to,nn.weight = tm.weight;
                PQ.push(nn);
                cst[tm.to] = tm.weight;
            }
        }
    }
    return ans;
}
bool operator<(node a, node b)
{ return a.weight>b.weight;}
int main ()
{
    ///freopen("in.txt","r",stdin);
    ll x,y,w;
    node d;
    while(cin>>n>>e)
    {
        for (ll i=0;i<e;i++)
        {
            cin>>x>>y>>w;
            d.to = y,d.weight = w;
            nodes[x].push_back(d);
            d.to = x;
            nodes[y].push_back(d);
        }

        ll ans = prims();
        cout<<ans<<endl;
    }
    return 0;
}

