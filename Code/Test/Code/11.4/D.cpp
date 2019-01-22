//#include<iostream>
#include<fstream>
#include<vector>
#include<cstdlib>
using namespace std;
ifstream cin("D.in");
ofstream cout("D.out");
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        sum+=l;
    }
    sum*=n;
    srand(sum);
    cout<<rand()%11<<endl;
    cin.close();
    cout.close();
    return 0;
}
