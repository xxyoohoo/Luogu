//https://www.luogu.com.cn/record/215844082
//https://vjudge.net/solution/60399062/fSSIS9jPrBNnhWV260mp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> t(n);
    for (int i=0;i<n;++i)
    {
        vector<int> r;
        for (int j=0;j<=i;++j)
        {
            if(j==0||j==i) r.push_back(1);
            else r.push_back(t[i-1][j-1]+t[i-1][j]);
        }
        t[i]=r;
    }
    for (auto &row:t)
    {
        for (int x:row)  cout << x << " ";
        cout << '\n';
    }
    return 0;
}
