#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int M = 2e5 + 100;
const int N = 5000 + 100;
struct Edge
{
    int x,y,z;
};
struct Edge edges[M];

int root[N];
bool comp(struct Edge a,struct Edge b)
{
    return a.z < b.z;
}
int find(int x)
{
   int y=x;
   while(y!=root[y])
   {
       y=root[y];
   }
   while(x!=root[x])
   {
       int ap=root[x];
       root[x]=y;
       x=ap;
   }
   return x;
}

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++) root[i] = i;
    for(int i=1;i<=m;i++)
    {
       cin >> edges[i].x >> edges[i].y >> edges[i].z;
    }
    sort(edges+1,edges+1+m,comp);
    int ans = 0;
    for(int i=1;i<=m;i++)
    {
        int s = edges[i].x;
        int t = edges[i].y;
        int fx = find(s);
        int fy = find(t);
        if(fx==fy) continue;
        else
        {
           root[fy] = fx;
           ans += edges[i].z;
        }
    }
    int num = 0;
    for(int i=1;i<=n;i++) if(root[i]==i) num++;
    if(num==1) cout << ans << endl;
    else cout << "orz" << endl;
    return 0;
}

