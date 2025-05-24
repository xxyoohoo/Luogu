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
    for (int i:v) cout << i << ' ';
    return 0;
}
