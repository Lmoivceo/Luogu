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
    work(n);
    while(m--)
    {
        int l;
        cin>>l;
        if(!flag[l])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
