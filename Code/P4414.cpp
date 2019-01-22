#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
    int a,b,c;
    cin>>a>>b>>c;
    char ca,cb,cc;
    m[ca]=a;
    m[cb]=b;
    m[cc]=c;
    for(char i='A';i<='C';i++)
    {
        cout<<m[i]<<endl;
    }
    return 0;
}