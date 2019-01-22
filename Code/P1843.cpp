#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>
using namespace std;
priority_queue<int>pq;
int main()
{
    freopen("in.txt","r",stdin);
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        pq.push(num);
    }
    int t=0;
    while(!pq.empty())
    {
        int now=pq.top();
        pq.pop();
        if(now<=t*a)
            break;
        now-=b;
        pq.push(now);
        t++;
    }
    cout<<t<<endl;
    return 0;
}