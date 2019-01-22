#include<iostream>
#include<vector>
using namespace std;
class point
{
    friend istream& operator >> (istream&in,point obj)
    {
        in>>obj.x>>obj.y;
    }
    friend ostream& operator << (ostream&out,const point obj)
    {
        out<<'('<<obj.x<<','<<obj.y<<')';
    }
    friend bool operator == (point a,point b)
    {
        return a.x==b.x&&a.y==b.y;
    }
public:
    int x,y;
};
bool map[20][20];
bool flag[20][20];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
int m,n;
point bg,ed;
vector<point>ans;
void dfs(point,point);
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>map[i][j];
    cin>>bg>>ed;

}
void dfs(point now)
{
    if(now==ed)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
            if(i==ans.size()-1)
                cout<<endl;
            else
                cout<<"->";
        }
    }
    for(int i=0;i<4;i++)
    {
        point next={now.x+dx[i],now.y+dy[i]};

    }
}
