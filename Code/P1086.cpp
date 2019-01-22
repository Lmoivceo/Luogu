#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int n,m,Time,map[21][21],ans = 0;
void dfs(int nowtime,int x,int y)
{
    int Maxx,Maxy,Max = INT_MIN;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (map[i][j] > Max)
            {
                Max = map[i][j];
                Maxx = i;
                Maxy = j;
            }
    if (!y)
        y = Maxy;
    if (nowtime < abs(x-Maxx)+abs(y-Maxy)+Maxx+1 || !map[Maxx][Maxy])
        return;
    else
    {
        ans += map[Maxx][Maxy];
        map[Maxx][Maxy] = 0;
        dfs(nowtime-abs(x-Maxx)-abs(y-Maxy)-1,Maxx,Maxy);
    }
}
int main()
{
    cin >> n >> m >> Time;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> map[i][j];
    dfs(Time,0,0);
    cout << ans << endl;;
    return 0;
}
