#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int map[15][15];
int dis[15][15][10];
int n,m;
struct node
{
    int x,y,blood;
};
void bfs(int bx,int by,int ex,int ey)
{
    queue<node>que;
    node now;
    now.x=bx,now.y=by,now.blood=6;
    dis[bx][by][6]=0;
    que.push(now);
    while(!que.empty())
    {
        now=que.front();
        que.pop();
        if(now.blood==1)continue;
        for(int i=0;i<4;i++)
        {
            int xx=dx[i]+now.x;
            int yy=dy[i]+now.y;
            if(xx<0||yy<0||xx>=n||yy>=m)
                continue;
            if(map[xx][yy]==0)
                continue;
            node next={xx,yy,now.blood-1};
            if(map[xx][yy]==4)next.blood=6;
            if(next.blood==0)continue;
            if(dis[xx][yy][next.blood]>dis[now.x][now.y][now.blood]+1)
            {
            	dis[xx][yy][next.blood]=dis[now.x][now.y][now.blood]+1;
            	que.push(next);
			}
        }
    }
}
int main()
{
	memset(dis,0x3f,sizeof(dis));
    int bx,by,ex,ey;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
            if(map[i][j]==2)bx=i,by=j;
            if(map[i][j]==3)ex=i,ey=j;
        }
    bfs(bx,by,ex,ey);
    int ans=0x3f3f3f3f;
    for(int i=1;i<=6;++i)
    	ans=min(ans,dis[ex][ey][i]);
    if(ans==0x3f3f3f3f)ans=-1;
    cout<<ans<<endl;
    return 0;
}
