#include<iostream>
#define N (unsigned long long)1e9+7
using namespace std;
template<class T>
T fp(T a,T b,T k)
{
    T rtn=1;
    a%=k;
    while(b)
    {
        if(b&1)
            rtn=rtn*a%k;
        a=a*a%k;
        b>>=1;
    }
    return rtn%k;
}
int main()
{
    unsigned long long n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            unsigned long long num;
            cin>>num;
            cout<<fp(num,k,N);
            if(j!=n-1)cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
