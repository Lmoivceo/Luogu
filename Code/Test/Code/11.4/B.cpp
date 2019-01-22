#include<iostream>
//#include<fstream>
#include<algorithm>
using namespace std;
//ifstream cin("B.in");
//ofstream cout("B.out");
//struct stn
//{
//    int k,m;
//    friend bool operator < (stn a,stn b)
//    {
//        return a.k*b.m>b.k*a.m;
//    }
//}stone[11000];
//int main()
//{
//    int v,n,c;
//    cin>>v>>n>>c;
//    for(int i=0;i<n;i++)
//        cin>>stone[i].k>>stone[i].m;
//    sort(stone,stone+n);
//    for(int i=0;i<n;i++)
//    {
//        v-=stone[i].k;
//        c-=stone[i].m;
//        if(c<0)
//        {
//            cout<<"Impossible"<<endl;
//            return 0;
//        }
//    }
//    cout<<c<<endl;
//    cin.close();
//    cout.close();
//    return 0;
//}

int k[10005],m[10005],dp[10005];
//dp[i]n表示当体力为i时,可以填满的最大体积
int main()
{
    int v,n,c;
    cin>>v>>n>>c;
    //v表示需要填的体积,n为石子个数,c为最大体力,即背包最大容量
    for(int i=0;i<n;i++)
        cin>>k[i]>>m[i];
    for(int i=0;i<n;i++)
    {
        for(int j=c;j>=m[i];j--)
        {
            dp[j]=max(dp[j-m[i]]+k[i],dp[j]);
        }
    }
    for(int i=0;i<=c;i++)
    {
        if(dp[i]>=v)
        {
            cout<<c-i<<endl;
            return 0;
        }
    }
    cout<<"Impossible"<<endl;
    //cin.close();
    //cout.close();
    return 0;
}
