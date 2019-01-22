//#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<queue>
using namespace std;
ifstream cin("B.in");
ofstream cout("B.out");
int a[1000005],ans[1000005];
int main()
{
    int n;
    queue<int>que;
    cin>>n;
    for(int i=0;i<n;i++)
        que.push(i+1);
    for(int i=0;!que.empty();i++)
    {
        que.push(que.front());
        que.pop();
        a[i]=que.front();
        que.pop();
    }
    for(int i=0;i<n;i++)
        ans[a[i]-1]=i+1;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
        if(i==n-1)cout<<endl;
        else cout<<' ';
    }
    return 0;
}
