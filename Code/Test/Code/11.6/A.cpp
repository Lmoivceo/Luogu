//#include<iostream>
#include<fstream>
using namespace std;
ifstream cin("A.in");
ofstream cout("A.out");
int root[2100];
int find(int x)
{
    if(x==root[x])
        return x;
    else
        return root[x]=find(root[x]);
}
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
        root[i]=i;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        root[find(a)]=root[b];
    }
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        if(find(x)==find(y))
            cout<<'Y'<<endl;
        else
            cout<<'N'<<endl;
    }
    return 0;
}