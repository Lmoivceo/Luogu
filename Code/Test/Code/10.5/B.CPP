#include <cstdio>
#include <cstdlib>
#include <cstring>
int root[100005],bo[100005];
int find(int x)
{
    if(x!=root[x])
        return x=find(root[x]);
    else return x;
}
int main()
{
    int count,flag,a,b,x,y,q,w,i;
    while(~scanf("%d %d",&a,&b))
    {
        count=0;
        memset(bo,0,sizeof(bo));
        flag=1;
        count=0;
        if(a==-1&&b==-1)  break;
        if(a==0&&b==0)
        {
            printf("Yes\n");
            continue;
        }
        for(i=1; i<100005; i++)
            root[i]=i;
        root[a]=b;
        bo[a]=bo[b]=1;
        while(~scanf("%d %d",&x,&y))
        {
            if(x==0&&y==0) break;
            q=find(x);
            w=find(y);
            if(q!=w)  root[q]=w;
            if(q==w)  flag=0;
            bo[x]=bo[y]=1;
        }
        for(i=1; i<=100005; i++)
        {
            if(bo[i]==1&&root[i]==i)
                count++;
        }
        if(flag==1&&count==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
