#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node
{
    long long a,b,c;
    int loc;
};
bool operator == (const node a,const node b)
{
    if(a.a==b.a&&a.b==b.b&&a.c==b.c)return 1;
    return 0;
}
vector<node>v;
vector<long long>ans;
long long w(long long a,long long b,long long c)
{
    node l;l.a=a,l.b=b,l.c=c;
    vector<node>::iterator it=find(v.begin(),v.end(),l);
    if(it!=v.end())
        return ans[(*it).loc];
    l.loc=ans.size();
    v.push_back(l);
    if(a<=0||b<=0||c<=0)
    {
        long long rtn=1;
        ans.push_back(rtn);
        return 1;
    }
    else if(a>20||b>20||c>20)
    {
        long long rtn=w(20,20,20);
        ans.push_back(rtn);
        return rtn;
    }
    else if(a<b&&b<c)
    {
        long long rtn=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        ans.push_back(rtn);
        return rtn;
    }
    else
    {
        long long rtn=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        ans.push_back(rtn);
        return rtn;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    while(true)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1)
            break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
    return 0;
}
