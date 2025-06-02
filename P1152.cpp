//http://luogu.com.cn/record/219227894
//https://vjudge.net/solution/61048136/sFNs9JtgZXbcVhA7RQmN
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,c;
    cin >> n >> x;
    if(n==1) {cout << "Jolly\n"; return 0;}
    vector<int> a(n,0);
    for(int i=1;i<n;++i)
    {
        cin >> c;
        int d=abs(c-x);
        if(d>=1 && d<=n-1) a[d]++;
        x=c;
    }
    for(int i=1;i<=n-1;++i)
    {
        if(a[i]==0)
        {
            cout << "Not jolly\n";
            return 0;
        }
    }
    cout << "Jolly\n";
    return 0;
}
