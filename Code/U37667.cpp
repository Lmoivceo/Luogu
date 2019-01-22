#include<iostream>
using namespace std;
bool check(long long m,long long l,long long r,long long a)
{
    long long x1=(l+a-2)/m+1,x2=(r+a-2)/m+1;
    return x1==x2?true:false;
}
int main()
{
    long long n,m,s,q;
    cin>>n>>m>>s>>q;
    long long la=1,ra=m;
    for(int i=0;i<s;i++)
    {
        long long n1,n2;
        cin>>n1>>n2;
        long long l=la,r=ra;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            if(check(m,n1,n2,mid))r=mid-1;
            else l=mid+1;
        }
        la=l;
        l=la,r=ra;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            if(check(m,n1,n2,mid))l=mid+1;
            else r=mid-1;
        }
        ra=r;
    }
    if(la>ra)
    {
        cout<<"Impossible!"<<endl;
        return 0;
    }
    else if(la-ra!=0)
    {
        cout<<"Uncertain!"<<endl;
        return 0;
    }
    long long a=ra;
    long long ans=0;
    for(int i=0;i<q;i++)
    {
        long long num;
        cin>>num;
        long long x=(num+a-2)/m+1,y=(num+a-2)%m+1;
        if(x>n||y>m)
        {
            cout<<"Impossible!"<<endl;
            return 0;
        }
        ans^=x;
        ans^=y;
    }
    cout<<ans<<endl;
    return 0;
}
