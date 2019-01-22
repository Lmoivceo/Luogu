//#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
ifstream cin("C.in");
ofstream cout("C.out");
struct line
{
    int l,r;
    friend bool operator < (line a,line b)
    {
        return a.r-a.l<b.r-b.l;
    }
};
priority_queue<line>pq;
int main()
{
    string s;
    cin>>s;
    int tg=0,tr=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            if(s[j]=='R')tr++;
            if(s[j]=='G')tg++;
            if(tr==tg)
            {
                line l;
                l.l=i,l.r=j;
                pq.push(l);
            }
        }
        tr=tg=0;
    }
    if(pq.empty())
    {
        cout<<0<<endl;
        return 0;
    }
    int ans=pq.top().r-pq.top().l+1;
    cout<<ans<<endl;
    return 0;
}