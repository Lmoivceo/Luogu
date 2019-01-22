#include<iostream>
using namespace std;
int a[10005][4];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    int x,y;
    cin>>x>>y;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i][0]<=x&&a[i][1]<=y&&a[i][0]+a[i][2]>=x&&a[i][1]+a[i][3]>=y)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
