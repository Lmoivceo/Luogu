#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
vector<string>b;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    getline(cin,s);
    for(int i=0;i<n;i++)
    {
        string l;
        getline(cin,l);
        b.push_back(l);
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        string l;
        cin>>l;
        if(find(b.begin(),b.end(),l)!=b.end())
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}