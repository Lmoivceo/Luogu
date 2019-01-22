#include<iostream>
#include<cstdio>
using namespace std;
void file()
{
    freopen("mine.in","r",stdin);
    freopen("mine.out","w",stdout);
}
char map[110][110];
int ans[110][110];
int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
int main()
{
    file();
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>map[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(map[i][j]=='*')
                continue;
            for(int k=0;k<8;k++)
            {
                int xx=i+dx[k];
                int yy=j+dy[k];
                if(xx<0||yy<0||xx>=n||yy>=m)
                    continue;
                if(map[xx][yy]=='*')
                {
                    ans[xx][yy]=-1;
                    ans[i][j]++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ans[i][j]==-1)
                cout<<'*';
            else
                cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}