//#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
ifstream cin("A.in");
ofstream cout("A.out");
vector<int>vx;
vector<int>vy;
char map[25][25];
bool flag[25][25];
int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
int sx[4]={0,0,1,-1};
int sy[4]={1,-1,0,0};
int m,n,bx,by;
int ans;
void dfs(int x,int y)
{
    vx.push_back(x);
    vy.push_back(y);
    for(int i=0;i<8;i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx<1||yy<1||xx>m||yy>n)
            continue;
        if(map[xx][yy]=='.')
            continue;
        if(flag[xx][yy])
            continue;
        flag[xx][yy]=1;
        dfs(xx,yy);
    }
}
int main()
{
    cin>>m>>n>>bx>>by;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>map[i][j];
    flag[bx][by]=1;
    dfs(bx,by);
    for(int i=0;i<vx.size();i++)
    {
        for(int j=0;j<4;j++)
        {
            int xx=sx[j]+vx[i];
            int yy=sy[j]+vy[i];
            if(xx<1||yy<1||xx>m||yy>n)
            {
                ans++;
                continue;
            }
            if(map[xx][yy]=='.')
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}