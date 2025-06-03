//https://www.luogu.com.cn/record/219349353
//https://vjudge.net/solution/61067201/zEEpqCtzA5GYoOWum8ZB
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z,ans=0,b=0;
    char a[1000][1000];
    cin >> x >> y >> z;
    for(int i=0;i<x;++i) for(int j=0;j<y;++j) cin >> a[i][j];
    for(int i=0;i<x;++i)
    {
        b=0;
        for(int j=0;j<y;++j)
        {
            if(a[i][j]=='.') {++b; if(b>=z) ++ans;}
            else b=0;
        }
    }
    b=0;
    if(z>1)
    {
        for(int j=0;j<y;++j)
        {
            b=0;
            for(int i=0;i<x;++i)
            {
                if(a[i][j]=='.') {++b; if(b>=z) ++ans;}
                else b=0;
            }
        }
    }
    cout << ans;
    return 0;
}

