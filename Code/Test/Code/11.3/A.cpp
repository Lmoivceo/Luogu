#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("A.in");
ofstream fout("A.out");
int num[10005];
int main()
{
    int n;
    fin>>n;
    int ans=1;
    for(int i=0;i<n;i++)
        fin>>num[i];
    for(int i=0;i<n;i++)
    {
        int now=num[i],tot=1;
        for(int j=i+1;j<n;j++)
        {
            if(num[j]==now+1)
            {
                tot++;
                now++;
            }
        }
        ans=max(ans,tot);
    }
    fout<<ans<<endl;
    return 0;
}
