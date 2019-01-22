#include<iostream>
#include<iomanip>
using namespace std;
const double pi=__builtin_acos(-1.0);
int main()
{
    double r;
    cin>>r;
    cout<<fixed<<setprecision(8)<<pi*r*r<<endl;
    cout<<fixed<<setprecision(8)<<2*r*r<<endl;
    return 0;
}