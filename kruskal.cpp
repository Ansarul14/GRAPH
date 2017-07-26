//kruskal code
#include<bits/stdc++.h>
using namespace std;
int kruskal();
int froot(int a);
int cost,arr[1000005];
int n,e;
struct stree
{
    int v1,v2,w;
} kr[1000005];
bool compare (stree a,stree b)
{
   return (a.w<b.w);
}
int main()
{

    int i,j,p,q;
    while(cin>>n>>e)
    {
        for(i=0;i<e;i++)
            cin>>kr[i].v1>>kr[i].v2>>kr[i].w;
        sort(kr,kr+e,compare);
        cost=0;
        for(i=1;i<=n;i++)
            arr[i]=i;
        kruskal();
        cout<<cost<<endl;
    }
}
int kruskal()
{
    for(int i=0;i<e;i++)
    {
        int r1=kr[i].v1;
        int r2=kr[i].v2;
        if (froot(r1)!=froot(r2))
        {
            cost+=kr[i].w;
            int root1=froot(r1);
            int root2=froot(r2);
            arr[root1]=root2;
            //arr[arr[kr[i].v2]]=arr[arr[kr[i].v1]];
        }
    }
}
int froot(int a)
{
   if (arr[a]==a)
    return a;
   return arr[a]=froot(arr[a]);
}
