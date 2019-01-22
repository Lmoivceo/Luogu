#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
const int N = 100+10;
char Map[N][N];
bool vis[N][N][1<<5];
int n,m,k;
struct Node
{
    int x,y;
    int cnt,sta;
};
int dir[4][2]={0,1,1,0,0,-1,-1,0};
int bfs(int x,int y)
{
    memset(vis,true,sizeof(vis));
    Node now,next;
    queue<Node> que;
    now.x=x; now.y=y;
    now.cnt=now.sta=0;
    vis[x][y][0]=false;
    que.push(now);
    while(!que.empty())
    {
        now=que.front();
        que.pop();
        bool flag=true;
        for(int i=1;i<=k;i++)
        {
            if(!((now.sta>>i)&1))
            {
                flag=false; break;
            }
        }
        if(flag) return now.cnt;

        for(int i=0;i<4;i++)
        {
            next.x=now.x+dir[i][0];
            next.y=now.y+dir[i][1];
            next.sta = now.sta;

            if(next.x<1 ||next.x>n) continue;
            if(next.y<1 ||next.y>m) continue;
            if(!vis[next.x][next.y][next.sta] || Map[next.x][next.y]=='#') continue;//直接判掉同样的状态已经走过的点

            if(Map[next.x][next.y]>'0'&&Map[next.x][next.y]<'9') next.sta |= 1<< (Map[next.x][next.y]-'0');
            vis[next.x][next.y][next.sta]=false;
            next.cnt=now.cnt+1;
            que.push(next);
        }
    }
    return -1;
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0) break;
        int x,y;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                scanf(" %c",&Map[i][j]);
                if(Map[i][j]=='@') x=i,y=j;
            }
        scanf("%d",&k);
        for(int i=1;i<=k;i++)
        {
            int xx,yy;
            scanf("%d %d",&xx,&yy);
            if(Map[xx][yy]!='#') Map[xx][yy]=i+'0';
        }
        printf("%d\n",bfs(x,y));
    }
    return 0;
}

---------------------

本文来自 WANSNIM 的CSDN 博客 ，全文地址请点击：https://blog.csdn.net/Codeblocksm/article/details/47322897?utm_source=copy 
