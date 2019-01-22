#include<iostream>
using namespace std;
int ans;
int n,k;
void dfs(int last,int sum,int step)
{
    if(step==k)
    {
        if(sum==n)
            ans++;
        return;
    }
    for(int i=last;sum+i*(k-step)<=n;i++)
        dfs(i,sum+i,step+1);
}
int main()
{
    cin>>n>>k;
    dfs(1,0,0);
    cout<<ans<<endl;
    return 0;
}