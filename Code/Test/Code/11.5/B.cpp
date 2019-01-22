//#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
ifstream cin("B.in");
ofstream cout("B.out");
int n,r;
int ans[30];
int a[30];
bool use[30];
int rzt=0;
bool check(int x)
{
    if(x==0||x==1)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for(int i=3;i<=__builtin_sqrt(x);i+=2)
        if((x%i)==0)return 0;
    return 1;
}
void f(int x)
{
    int l=0;
    for(int i=1;i<=x;i++)
        l+=a[ans[i]-1];
    if(check(l))rzt++;
    return;
}
void dfs(int x)
{
    if(x>r)
    {
        f(r);
        return;
    }
    for(int i=ans[x-1]; i<=n; i++)
        if(!use[i])
        {
            ans[x]=i;
            use[i]=1;
            dfs(x+1);
            use[i]=0;
        }
}
int main()
{
    cin>>n>>r;
    ans[0]=1;
    int i=0;
    while(i<n)
        cin>>a[i++];
    dfs(1);
    cout<<rzt<<endl;
    return 0;
}
