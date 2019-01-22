#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
list<int>lst;
int main()
{
    int m,n;
    cin>>m>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        if(find(lst.begin(),lst.end(),l)!=lst.end())            //在"内存"中查找"单词"
            continue;
        else
        {
            lst.push_back(l);
            ans++;
            if(lst.size()>m)
                lst.pop_front();                                //如果超出"内存"限制,删除头端
        }
    }
    cout<<ans<<endl;
    return 0;                                                   //竞赛要求
}
