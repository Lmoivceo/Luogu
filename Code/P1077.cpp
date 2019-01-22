#include<iostream>
#define N 1000007
using namespace std;
int a[10005];
int dp[10005][10005]={{1}};
int main()
{
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for (int j=0;j<=m;j++)
            for (int k=0;k<=a[i];k++)
                dp[i][j]=(dp[i][j]+dp[i-1][j-k])%N;
    cout<<dp[n][m]<<endl;
    return 0;
}
