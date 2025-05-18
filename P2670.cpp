//https://www.luogu.com.cn/record/217744866
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans;
    cin >> n >> m;
    char a[1000][1000];
    for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> a[i][j];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(a[i][j]=='*') cout << '*';
            else
            {
                ans=0;
                for(int x=-1;x<=1;++x)
                {
                    for(int y=-1;y<=1;++y)
                    {
                        if(x==0&&y==0) continue;
                        if(i+x>=0 && i+x<n && j+y>=0 && j+y<m && a[i+x][j+y]=='*') ++ans;
                    }
                }
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}
