#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,c=0,x,y,z;
    cin >> n >> m;
    vector<int> a(n);
    vector<string> s(n);
    for (int i=0;i<n;++i) cin >> a[i] >> s[i];
    for (int i=0;i<m;++i)
    {
        cin >> x >> y;
        if (a[cur]==0)//inward
        {
            if (x==0) z=-1; //lft clk
            else z=1; //rt ct-clk
        }
        else //outward
        {
            if(x==0) z=1; //lft,ct-clk
            else z=-1; //rt, clk;
        }
        c=(c+z*y+n)%n;
    }
    cout << s[c] << '\n';

    return 0;
}
