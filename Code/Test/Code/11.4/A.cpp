#include<iostream>
#include<fstream>
#include<string>
#include<climits>
using namespace std;
//ifstream cin("A.in");
//ofstream cout("A.out");
struct info
{
    string name;
    int g1,g2;
    bool gb,xb;
    int atc;
    int money;
}stu[110];
int work(info);
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name;
        cin>>stu[i].g1>>stu[i].g2;
        char c;
        cin>>c;
        stu[i].gb=(c=='Y')?1:0;
        cin>>c;
        stu[i].xb=(c=='Y')?1:0;
        cin>>stu[i].atc;
        stu[i].money=work(stu[i]);
        sum+=stu[i].money;
    }
    int maxn=INT_MIN,loc;
    for(int i=0;i<n;i++)
    {
        if(stu[i].money>maxn)
            maxn=stu[i].money,loc=i;
    }
    cout<<stu[loc].name<<endl;
    cout<<maxn<<endl;
    cout<<sum<<endl;
    //cin.close();
    //cout.close();
    return 0;
}
int work(info n)
{
    int rtn=0;
    if(n.g1>80)
        if(n.atc>=1)
            rtn+=8000;
    if(n.g1>85)
        if(n.g2>80)
            rtn+=4000;
    if(n.g1>90)
        rtn+=2000;
    if(n.g1>85)
        if(n.xb)
            rtn+=1000;
    if(n.g2>80)
        if(n.gb)
            rtn+=850;
    return rtn;
}
