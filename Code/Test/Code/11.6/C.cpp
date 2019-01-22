//#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
ifstream cin("C.in");
ofstream cout("C.out");
vector<int> v[10];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int line,num;
        cin>>line>>num;
        v[line].push_back(num);
    }
    for(int i=1;i<=6;i++)
        if(!v[i].empty())
            sort(v[i].begin(),v[i].end());
    int ans=0;
    for(int i=1;i<=6;i++)
    {
        if(v[i].empty())
            continue;
        int l,r;
        l=r=0;
        int sum=1;
        for(int j=0;j<v[i].size();j++)
        {
            r=j;
            if(v[i][r]-v[i][l]>=60)
            {
                l=r;
                sum++;
            }
        }
        ans+=sum;
    }
    cout<<ans<<endl;
    return 0;
}