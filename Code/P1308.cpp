#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
void bw(string &s)
{
    for(int i=0;i<s.size();i++)
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]-'A'+'a';
}
string word,sentence;
int main()
{
    cin>>word;
    string l;
    getline(cin,l);
    getline(cin,sentence);
    bw(word);
    bw(sentence);
    word=' '+word+' ';
    sentence=' '+sentence+' ';
    int sum=0;int location=73;
    int loc=sentence.find(word);
    while(loc!=string::npos)
    {
        if(sum==0)location=loc;
        sum++;
        sentence.erase(loc,word.size()-1);
        loc=sentence.find(word,loc);
    }
    if(sum==0)cout<<-1<<endl;
    else cout<<sum<<' '<<location<<endl;
    return 0;
}
