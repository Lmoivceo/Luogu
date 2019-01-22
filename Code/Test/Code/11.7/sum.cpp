#include<iostream>
#include<cstdio>
using namespace std;
int nums[1000005],colors[1000005];
void file()
{
    freopen("sum.in","r",stdin);
    freopen("sum.out","w",stdout);
}
int main()
{
    file();
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>nums[i];
    for(int i=1;i<=n;i++)
        cin>>colors[i];
    int ans=0;
    for(int i=2;i<n;i++)
    {
        for(int j=1;i-j>=1&&i+j<=n;j++)
        {
            int x=i-j,y=i,z=i+j;
            if(colors[x]==colors[z])
                ans+=(x+z)*(nums[x]+nums[z])%10007;
        }
    }
    cout<<ans<<endl;
    return 0;
}