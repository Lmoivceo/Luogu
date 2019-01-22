#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 500000+10;
int r[N],dp[N];
int find(int len,int x)
{
    int l=1,r=len;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        if(dp[mid]==x) return mid;
        else if(dp[mid]>x) r=mid-1;
        else l= mid+1;
    }
    return l;
}

int main()
{
    int n,cas=1;
    while(~scanf("%d",&n))
    {
        int x,y;
        for(int i=1;i<=n;i++) scanf("%d%d",&x,&y),r[x]=y;
        memset(dp,0,sizeof(dp));
        dp[0]=-1,dp[1]=r[1];
        int len = 1;
         for(int i=1;i<=n;i++) 
        {
            int j=find(len,r[i]);
            dp[j]=r[i];
            if(j>len) len++;
        }
         printf("Case %d:\n",cas++);
         if(len==1) printf("My king, at most 1 road can be built.\n");
         else printf("My king, at most %d roads can be built.\n",len);
         printf("\n");
    }
    return 0;
}

---------------------

本文来自 WANSNIM 的CSDN 博客 ，全文地址请点击：https://blog.csdn.net/Codeblocksm/article/details/47086161?utm_source=copy 
