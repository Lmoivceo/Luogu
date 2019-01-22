#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int Map[15][15];
struct Node
{
    int x,y;
}arr[100];
int tt;
bool vis[3][15][15];
bool flag;
int init (int i,int j)
{
    return (i-1)/3 * 3 + (j-1) / 3 + 1;
}
void dfs(int t)
{
   if(t==tt) {flag=true;return;}

   int x=arr[t].x;
   int y=arr[t].y;
   for(int i=1;i<=9;i++)
   {
       if(!vis[0][x][i] || !vis[1][y][i] || !vis[2][init(x,y)][i]) continue;
       vis[0][x][i] = vis[1][y][i]= vis[2][init(x,y)][i]=false;
       Map[x][y]=i;
       dfs(t+1);
       if(flag) return;
       vis[0][x][i] = vis[1][y][i]= vis[2][init(x,y)][i]=true;
   }
   return;
}
int main()
{
    char op;
    int cnt=0;
    while(cin>>op)
    {
        cnt++;
        memset(arr,0,sizeof(arr));
        tt=0;
        memset(vis,true,sizeof(vis));

        for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
        {
            if(!(i==1&&j==1)) cin>>op;
            if(op=='?') Map[i][j]=0,arr[tt++].x=i,arr[tt-1].y=j;
            else Map[i][j]=op-'0';
            vis[0][i][Map[i][j]]=vis[1][j][Map[i][j]]=vis[2][init(i,j)][Map[i][j]]=false;
        }

        flag=false;
        dfs(0);
        if(cnt>1) printf("\n");
        for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++)
        printf("%d%c",Map[i][j],j==9?'\n':' ');
    }
    return 0;
}

---------------------

???? WANSNIM ?CSDN ?? ,???????:https://blog.csdn.net/Codeblocksm/article/details/47355389?utm_source=copy 
