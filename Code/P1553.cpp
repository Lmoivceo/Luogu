#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
string s;
void delete_zero(string &ss,bool loc)
{
    if(loc==0)
    {
        while(true)
        {
            if(ss[0]=='0') ss.erase(0,1);
            else break;
            if(ss.empty()) break;
        }
    }
    else
    {
        while(true)
        {
            if(ss[ss.size()-1]=='0') ss.erase(ss.size()-1,1);
            else break;
            if(ss.empty()) break;
        }
    }
}
void rev(string &ss)
{reverse(ss.begin(),ss.end());}
void fls(string &ss,int location,const char c)
{
    string s1=ss,s2=ss;
    s1.erase(location,ss.size()-location);
    s2.erase(0,location+1);
    rev(s1);
    rev(s2);
    delete_zero(s1,0);
    if(c=='.')delete_zero(s2,1);
    else delete_zero(s2,0);
    if(s1.empty())
        s1="0";
    if(s2.empty())
        s2="0";
    ss=s1+c+s2;
}
void cz1(string &ss)
{
    rev(ss);
    delete_zero(ss,0);
    if(ss.empty())
        ss="0";
}
void cz2(string &ss,int location)
{fls(ss,location,'.');}
void cz3(string &ss,int location)
{fls(ss,location,'/');}
void cz4(string &ss)
{
    ss.erase(ss.size()-1);
    rev(ss);
    delete_zero(ss,0);
    if(ss.empty())
        ss="0";
    ss=ss+'%';
}
int main()
{
    cin>>s;
    bool cz=false;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            cz2(s,i);
            cz=true;
            break;
        }
        else if(s[i]=='/')
        {
            cz3(s,i);
            cz=true;
            break;
        }
    }
    if(cz==false)
    {
        if(s[s.size()-1]=='%')
            cz4(s);
        else
            cz1(s);
    }
    cout<<s<<endl;
    return 0;
}