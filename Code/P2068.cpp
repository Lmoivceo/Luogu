#include<iostream>
using namespace std;
int nums[100005];
int main()
{
    int n,w;
    cin>>n>>w;
    for(int i=0;i<w;i++)
    {
        char c;
        cin>>c;
        int a,b;
        cin>>a>>b;
        if(c=='x')
            nums[a]+=b;
        else
        {
            int sum=0;
            for(int i=a;i<=b;i++)
                sum+=nums[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}