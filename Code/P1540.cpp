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
        if(find(lst.begin(),lst.end(),l)!=lst.end())            //��"�ڴ�"�в���"����"
            continue;
        else
        {
            lst.push_back(l);
            ans++;
            if(lst.size()>m)
                lst.pop_front();                                //�������"�ڴ�"����,ɾ��ͷ��
        }
    }
    cout<<ans<<endl;
    return 0;                                                   //����Ҫ��
}
