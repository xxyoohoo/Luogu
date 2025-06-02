//https://www.luogu.com.cn/record/219228131
//https://vjudge.net/solution/61048210/hhvohxIXVcdffB7nLnJI
#include <bits/stdc++.h>
using namespace std;
struct person
{
    string s;
    int y,m,d,order;
};
bool comp(const person &a, const person &b)
{
    if (a.y!=b.y) return a.y<b.y;
    else if (a.m!=b.m) return a.m<b.m;
    else if (a.d!=b.d) return a.d<b.d;
    else return a.order>b.order;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<person> v(n);
    for (int i=0;i<n;++i)
    {
        cin >> v[i].s >> v[i].y >> v[i].m >> v[i].d;
        v[i].order = i;
    }
    sort(v.begin(),v.end(),comp);
    for (const auto &person:v) cout << person.s << endl;
    return 0;
}
