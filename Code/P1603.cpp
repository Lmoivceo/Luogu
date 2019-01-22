#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<sstream>
#define deb if(0)
using namespace std;
map<string,int>nums;
int n[10];
string nts(int n)
{
    string rtn="";
    char c=(n%10)+'0';
    rtn+=c;
    n/=10;
    if(n==0)
        c='0';
    else c=n%10+'0';
    rtn+=c;
    reverse(rtn.begin(),rtn.end());
    return rtn;
}
int main()
{
    nums["one"]=nums["a"]=nums["another"]=nums["first"]=1;
    nums["two"]=nums["both"]=nums["second"]=2;
    nums["three"]=nums["third"]=3,nums["four"]=4;
    nums["five"]=5,nums["six"]=6,nums["seven"]=7;
    nums["eight"]=8,nums["nine"]=9,nums["ten"]=10;
    nums["eleven"]=11,nums["twelve"]=12,nums["thirteen"]=13;
    nums["fourteen"]=14,nums["fifteen"]=15,nums["sixteen"]=16;
    nums["seventeen"]=17,nums["eighteen"]=18,nums["nineteen"]=19;
    vector<string>ans;
    nums["twenty"]=20;
    for(int i=0;i<6;i++)
    {
        string s;
        cin>>s;
        deb cout<<"debug1"<<endl;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]>='A'&&s[j]<='Z')
                s[j]=s[j]-'A'+'a';
        }
        deb cout<<"debug3"<<endl;
        int l=nums[s];
        l=l*l%100;
        if(l!=0)
        {
            string a=nts(l);
            ans.push_back(a);
        }
    }
    if(ans.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(ans.begin(),ans.end());
    string ss;
    for(int i=0;i<ans.size();i++)
    {
        ss+=ans[i];
    }
    stringstream sss;
    sss<<ss;
    long long ansn;
    sss>>ansn;
    cout<<ansn<<endl;
    return 0;
}