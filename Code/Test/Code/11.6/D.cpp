//#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
ifstream cin("D.in");
ofstream cout("D.out");
int main()
{
    int n;
    cin>>n;
    double ldo=100.0;
    double lmk=0.0;
    double dt;
    for(int i=0;i<n;i++)
    {
        cin>>dt;
        dt/=100.0;//dt=mark:dollar
        ldo=max(ldo,lmk/dt);
        lmk=max(lmk,ldo*dt);
    }
    cout<<fixed<<setprecision(2)<<max(ldo,lmk/dt)<<endl;
    return 0;
}