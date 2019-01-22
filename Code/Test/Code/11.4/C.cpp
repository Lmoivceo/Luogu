#include<iostream>
//#include<fstream>
using namespace std;
//ifstream cin("C.in");
//ofstream cout("C.out");
int num[110000];
int n,m;
bool check(int);
int main()
{
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    int l=0,r=sum;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))l=mid+1;
        else r=mid-1;
    }
    cout<<l<<endl;
    //cin.close();
    //cout.close();
    return 0;
}
bool check(int x)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            if(sum>=x)
            {
                if(n-(j-i)<m-1)
                    return false;
                else
                    return true;
            }
            sum+=num[j];
        }
    }
    return false;
}
