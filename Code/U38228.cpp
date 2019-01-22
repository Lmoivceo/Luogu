#include<iostream>
using namespace std;
int main()
{
    long long k,m;
    cin>>k>>m;
    long long sum=1;
    for(int i=1;1;i++,sum=sum*10+1)
    {
        if(sum%m==k)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
