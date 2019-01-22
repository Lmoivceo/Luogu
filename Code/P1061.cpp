#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s,t,w;
    cin>>s>>t>>w;
    string jam;
    cin>>jam;
    char least='a'+s-1;
    char most='a'+t-1;
    reverse(jam.begin(),jam.end());
    int n=5;
    while(n--)
    {
        jam[0]++;
        for(int i=0;i<jam.size();i++)
        {
            if(jam[i]>most)
            {
                if(i==jam.size()-1)
                    return 0;
                else
                {
                    jam[i+1]++;
                    jam[i]=least;
                }
            }
        }
        string ans=jam;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}