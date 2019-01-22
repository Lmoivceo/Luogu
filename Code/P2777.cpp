#include<iostream>
#include<algorithm>
using namespace std;
int men[300005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>men[i];
    sort(men,men+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(men[i]+n>=men[n-1]+1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}