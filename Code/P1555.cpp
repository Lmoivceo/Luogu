#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int otd(string,int);
int main()
{
    string a,b;
    cin>>a>>b;
    if(a[0]=='0')
    {
        cout<<otd(a,2)<<endl;
        return 0;
    }
    string ta=a,tb=b;
    for(int i=0;i<ta.size();i++)
    {
        ta[i]=!(ta[i]-'0')+'0';
        for(int j=0;j<tb.size();j++)
        {
            for(int k=0;k<3;k++)
            {
                if(k+'0'==tb[j])
                    continue;
                tb[j]=k+'0';
                int na=otd(ta,2);
                int nb=otd(tb,3);
                if(na==nb)
                {
                    cout<<na<<endl;
                    return 0;
                }
            }
            tb[j]=b[j];
        }
        ta[i]=a[i];
    }
    cout<<"Are You Kidding!!!"<<endl;
    return 0;
}
int otd(string num,int base)
{
    int rtn=0;
    reverse(num.begin(),num.end());
    for(int i=0;i<num.size();i++)
        rtn+=(num[i]-'0')*pow(base,i);
    return rtn;
}