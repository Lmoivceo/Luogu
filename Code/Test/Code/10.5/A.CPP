#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1005
int parent[N],hash[N];
int find(int x)
{
    int y=x;
    while(y!=parent[y])
    {
        y=parent[y];
    }
    while(x!=parent[x])
    {
        int px=parent[x];
        parent[x]=y;
        x=px;
    }
    return y;
}
void Union (int a,int b)
{
    if(rand()%2)
    {
        parent[a]=b;
    }
    else
    {
        parent[b]=a;
    }
}
int main()
{
    int n,m,count,x,y,q,w,i;
    while(~scanf("%d %d",&n,&m))
    {
        for(i=1;i<N;i++)
            parent[i]=i;
        count=0;
        if(n==0) break;
        while(m--)
        {
            scanf("%d %d",&x,&y);
            q=find(x);w=find(y);
            if(q!=w)  Union(q,w);
        }
        for(i=1;i<=n;i++)
        {
            if(parent[i]==i)  count++;
        }
        printf("%d\n",count-1);
    }
    return 0;
}
