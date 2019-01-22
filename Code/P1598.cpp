#include<iostream>
#include<string>
using namespace std;
bool pic[26][405];
int cs[26];
int main()
{
    string s;
    for(int i=0;i<4;i++)
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++)
            if(s[i]>='A'&&s[i]<='Z')
                cs[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
        for(int j=0;j<cs[i];j++)
            pic[i][j]=1;
    int maxn=0;
    for(int i=0;i<26;i++)
        if(cs[i]>maxn)
            maxn=cs[i];
    for(int i=maxn-1;i>=0;i--)
    {
        for(int j=0;j<26;j++)
        {
            if(pic[j][i]==0)cout<<' ';
            else cout<<'*';
            if(j==25)cout<<endl;
            else cout<<' ';
        }
    }
    for(int i=0;i<26;i++)
    {
        cout<<char('A'+i);
        if(i==25)cout<<endl;
        else cout<<' ';
    }
}
