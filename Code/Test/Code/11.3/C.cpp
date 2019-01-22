//#include<iostream>
#include<fstream>
using namespace std;
ifstream cin("C.in");
ofstream cout("C.out");
int a[110],dp[105][105]={{1}};
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=a[i];k++)
            {
                dp[i][j]=(dp[i-1][j-k]+dp[i][j])%1000007;
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}
/*
4 4
1 2 1 1
*/
