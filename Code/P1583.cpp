#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int w,id;
    friend bool operator < (node a,node b)
    {
        if(a.w==b.w)
            return a.id<b.id;
        else
            return a.w>b.w;
    }
}nd[20005];
int e[15];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=10;i++)
        cin>>e[i];
    for(int i=1;i<=n;i++)
        cin>>nd[i].w;
    sort(nd+1,nd+1+n);
    for(int i=1;i<=n;i++)
    {
        nd[i].id=n-i+1;
        nd[i].w+=e[(nd[i].id-1)%10+1];
    }
    sort(nd+1,nd+1+n);
    for(int i=1;i<=k;i++)
    {
        cout<<nd[i].id;
        if(i==k)
            cout<<endl;
        else
            cout<<' ';
    }
    return 0;
}