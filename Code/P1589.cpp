#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int l,r;
    friend bool operator < (node a,node b)
    {
        return a.l<b.l;
    }
}nd[11000];
int main()
{
    int n,l;
    cin>>n>>l;
    for(int i=0;i<n;i++)
        cin>>nd[i].l>>nd[i].r;
    sort(nd,nd+n);
    int ans=0,lastr=nd[0].l;
    for(int i=0;i<n;i++)
    {
        while(lastr<nd[i].r)
            lastr+=l,ans++;
        lastr=max(lastr,nd[i+1].l);
    }
    cout<<ans<<endl;
    return 0;
}