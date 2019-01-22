#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int sch[100005];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        cin>>sch[i];
    }
    int ans=0;
    sort(sch,sch+m);
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        int loc=lower_bound(sch,sch+m,l)-sch;
        int num;
        if(loc!=0)
            num=min(abs(sch[loc]-l),abs(sch[loc-1]-l));
        else
            num=abs(sch[loc]-l);
        ans+=num;
    }
    cout<<ans<<endl;
    return 0;
}