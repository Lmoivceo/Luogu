#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int c,y;
    cin>>c>>y;
    int lw=c;
    long long ans=lw*y;
    for(int i=1;i<n;i++)
    {
        cin>>c>>y;
        lw=min(lw+s,c);
        ans+=lw*y;
    }
    cout<<ans<<endl;
    return 0;
}