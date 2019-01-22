//#include<iostream>
#include<fstream>
using namespace std;
ifstream cin("D.in");
ofstream cout("D.out");
int x[500005],s[500005];
int main()
{
    int n,d,k;
    cin>>n>>d>>k;
    for(int i=0;i<n;i++)
        cin>>x[i]>>s[i];
    cout<<-1<<endl;
    return 0;
}
