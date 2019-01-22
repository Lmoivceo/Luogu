#include<iostream>
using namespace std;
int num[1100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>num[i];
    bool flag=1;
    int ans=1;
    for(int i=1;i<n;i++)
    {
        if(num[i-1]<num[i]&&flag==0)
            ans++,flag=1;
        if(num[i-1]>num[i]&&flag==1)
            ans++,flag=0;
    }
    cout<<ans<<endl;
    return 0;
}