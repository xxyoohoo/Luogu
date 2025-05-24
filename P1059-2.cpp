//https://www.luogu.com.cn/record/218382496
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;++i) {cin >> x;v.push_back(x);}
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size()<< endl;
    for (int i:v) cout << i << ' ';
    return 0;
}
