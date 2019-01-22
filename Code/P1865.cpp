#include<iostream>
#include<vector>
using namespace std;
bool flag[10000005]={1,1};
void work(int x)
{
    for(int i=2;i<=x;i++)
    {
        if(flag[i])continue;
        for(int j=i+i;j<=x;j+=i)
            flag[j]=true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    work(m);
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        if(l<1||r<1||l>m||r>m)
        {
            cout<<"Crossing the line"<<endl;
            continue;
        }
        int ans=0;
        for(int i=l;i<=r;i++)
            if(!flag[i])ans++;
        cout<<ans<<endl;
    }
    return 0;
}
