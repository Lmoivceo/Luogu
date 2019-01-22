#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        ans+=x+y-8;
        sum+=ans;
    }
    cout<<sum<<endl;
    return 0;
}