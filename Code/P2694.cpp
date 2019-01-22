#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct node
{
    int x,y;
    friend bool operator < (node a,node b)
    {
        return a.y<b.y;
    }
}nd[100];
int main()
{
    int G;
    cin>>G;
    while(G--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>nd[i].x>>nd[i].y;
        sort(nd,nd+n);
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(abs(nd[i].x-x)>nd[i].y)
            {
                cout<<"Notabletocatch"<<endl;
                goto B;
            }
            x=nd[i].x;
        }
        cout<<"Abletocatch"<<endl;
        B:;
    }
    return 0;
}