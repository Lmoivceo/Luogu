//#include<iostream>
#include<fstream>
#include<climits>
using namespace std;
ifstream cin("B.in");
ofstream cout("B.out");
int ht[100005];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ht[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        while(ht[i])
        {
            for(int j=i;j<n;j++)
            {
                if(!ht[j])
                    break;
                ht[j]--;
            }
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
