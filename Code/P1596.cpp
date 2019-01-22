#include<iostream>
using namespace std;
int n,m;
char map[105][105];
bool flag[105][105];
int dx[8]={1,-1,0,0,1,-1,1,-1};
int dy[8]={0,0,1,-1,1,-1,-1,1};
int ans;
void dfs(int x,int y)
{
    if(map[x][y]=='.')return;
    if(map[x][y]=='W')map[x][y]='.';
    for(int i=0;i<8;i++)
    {
        int xx=dx[i]+x;
        int yy=dy[i]+y;
        if(xx<0||yy<0||xx>=n||yy>=m)
            continue;
        dfs(xx,yy);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>map[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(map[i][j]=='.')continue;
            dfs(i,j);
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
