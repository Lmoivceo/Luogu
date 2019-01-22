#include<iostream>
using namespace std;
int dp[1000005]={0,1};
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        dp[i]=(dp[i-2]+dp[i-1]*2);
    }
    cout<<dp[n]<<endl;
    return 0;
}