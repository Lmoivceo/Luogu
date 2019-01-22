#include <algorithm>
using namespace std;
struct node
{
    long long a,b;
    long long dis;
} City[200005];
long long n,m,f[5005],tot,ans;
bool cmp(node a,node b)
{
    return a.dis<b.dis;
}
long long find(long long x)
{
    if(f[x]==x)return x;
    return f[x] = find(f[x]);
}
int main()
{
    while(~__builtin_scanf("%lld",&n))
    {
        if(n==0)
            break;
        __builtin_memset(City,0,sizeof(City));
        __builtin_memset(f,0,sizeof(f));
        m=n*(n-1)/2;
        tot=0;
        ans=0;
        for(long long i = 1; i <= n; ++i)
            f[i] = i;
        for(long long i = 0; i < m; ++i)
            __builtin_scanf("%lld %lld %lld",&City[i].a,&City[i].b,&City[i].dis);
        sort(City,City+m,cmp);
        for(long long i = 0; i < m; ++i)
        {
            if(find(City[i].a)==find(City[i].b))
                continue;
            f[find(City[i].a)] = find(City[i].b);
            ans+=City[i].dis;
//            if(++tot == n-1)
//            {
//                __builtin_printf("%lld\n",ans);
//                break;
//            }
        }
        __builtin_printf("%lld\n",ans);
    }
    return 0;
}
