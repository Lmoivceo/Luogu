#include<iostream>
using namespace std;
int h[11000];
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>h[i];
    int ans=1;
    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        /* for(l=i-1;l>=1;l--)
            if(h[l]<h[l-1])
                break;
        for(r=i+1;r<n-1;r++)
            if(h[r]<h[r+1])
                break; */
        while(l>=1&&h[l]>=h[l-1])
            l--;
        while(r<n-1&&h[r]>=h[r+1])
            r++;
        ans=max(ans,r-l+1);
    }
    cout<<ans<<endl;
    return 0;
}