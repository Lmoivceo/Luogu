#define printf __builtin_printf
#define scanf __builtin_scanf
#define max(a,b) a>b?a:b
int nums[1000005];
int main()
{
    int n,ans1=0,ans2=0;
    bool ud=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",nums+i);
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            ans1++;
            break;
        }
        else if(ud==0&&nums[i]>nums[i+1])
        {
            ans1++;
            ud=1;
        }
        else if(ud==1&&nums[i]<nums[i+1])
        {
            ans1++;
            ud=0;
        }
    }
    ud=1;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            ans2++;
            break;
        }
        else if(ud==0&&nums[i]>nums[i+1])
        {
            ans2++;
            ud=1;
        }
        else if(ud==1&&nums[i]<nums[i+1])
        {
            ans2++;
            ud=0;
        }
    }
    printf("%d",max(ans1,ans2));
    return 0;
}
