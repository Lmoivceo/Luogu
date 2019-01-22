#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int l,r;
    friend bool operator < (node a,node b){return a.l<b.l;}
}nd[20005];
int main()
{
    int ans=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>nd[i].l>>nd[i].r;
    sort(nd,nd+n);
    int l=nd[0].l,r=nd[0].r;
    int sum=r-l;
    for(int i=1;i<n;i++)
    {
        if(nd[i].l<=r)
        {
            if(nd[i].r<=r)
                continue;
            sum+=nd[i].r-r;
            r=nd[i].r;
        }
        else
        {
            sum+=nd[i].r-nd[i].l;
            r=nd[i].r;
        }
    }
    cout<<sum<<endl;
    return 0;
}