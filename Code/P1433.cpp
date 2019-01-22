#include <iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
double x[20],y[20];
int n;
bool flag[20];
int loc[20];
double ans=1e9;
double f(double x1,double y1,double x2,double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
void dfs(int xx,double ox,double oy,double lo)
{
    if(lo>=ans)return;
    if(xx>=n)
    {
        if(lo<ans)ans=lo;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i])continue;
        flag[i]=1;
        loc[xx]=i;
        dfs(xx+1,x[loc[xx]],y[loc[xx]],lo+f(ox,oy,x[loc[xx]],y[loc[xx]]));
        flag[i]=0;
    }
    return;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    dfs(0,0,0,0);
    printf("%.2lf",ans);
    return 0;
}
