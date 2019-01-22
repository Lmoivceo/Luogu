#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    for(int i=n;i>=0;i--)
    {
        int num;
        cin>>num;
        if(i==n)
        {
            if(num!=1&&i!=1&&i!=0)
                printf("%dx^%d",num,i);
            else if(num==1&&i!=1&&i!=0)
                printf("%d")
        }
        else
        {
            if(num>0)
            {
                if(i>1)
                    printf("+%dx^%d",num,i);
                else if(i==1)
                    printf("+%dx",num);
                else
                    printf("%d",num);
            }
            else if(num<0)
            {
                if(i>1)
                    printf("%dx^%d",num,i);
                else if(i==1)
                    printf("%dx",num);
                else
                    printf("%d",num);
            }
        }
    }
    return 0;
}
