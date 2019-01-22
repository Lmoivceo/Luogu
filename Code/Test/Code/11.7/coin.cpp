#include<iostream>
#include<cstdio>
using namespace std;
void file()
{
    freopen("coin.in","r",stdin);
    freopen("coin.out","w",stdout);
}
int main()
{
    file();
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int num=1;//当天所获金币
    int ans=0;//最终答案
    int sum=0;//获得第N枚硬币后的天数
    for(int i=1;i<=n;i++)
    {
        if(sum>=num)
            num++,sum=0;
        sum++;
        ans+=num;
    }
    cout<<ans<<endl;
    return 0;
}