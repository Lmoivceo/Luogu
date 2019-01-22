#include<iostream>
#include<cstring>
using namespace std;
int x[500005],s[500005];
int dp[500005];
int n,d,k;
bool check(int y)
{
    int l=max(1,d-y);
    int r=d+y;
    memset(dp,-128,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(x[i]-x[j]<l)
                continue;
            if(x[i]-x[j]>r)
                break;
            dp[i]=max(dp[i],dp[j]+s[i]);
            if(dp[i]>=k)
                return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>d>>k;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>s[i];
    }
    int l=0,r=x[n];
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))ans=mid,r=mid-1;
        else l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}
