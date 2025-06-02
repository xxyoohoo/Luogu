//https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P2676#author=DeepSeek_en
//https://www.luogu.com.cn/record/219227298
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int x,y,z,i=0;
    cin >> x >> y;
    while(x--) {cin >> z; v.push_back(z);}
    sort(v.begin(),v.end(),greater<int>());
    while(y>1)
    {
        y-=v[i];
        ++i;
    }
    cout << i;
}
