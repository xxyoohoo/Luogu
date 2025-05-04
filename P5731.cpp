//https://www.luogu.com.cn/record/216005145
//https://vjudge.net/solution/60429434/eGUYmckBMTjM8dYRxidi
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[10][10],x=1;
    cin >> n;
    int t=0,b=n-1,l=0,r=n-1;
    while(x<=n*n)
    {
        for(int i=l;i<=r;++i) {a[t][i]=x; ++x;}
        ++t;
        for(int i=t;i<=b;++i) {a[i][r]=x; ++x;}
        --r;
        for(int i=r;i>=l;--i) {a[b][i]=x; ++x;}
        --b;
        for(int i=b;i>=t;--i) {a[i][l]=x; ++x;}
        ++l;
    }
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<n;++j) cout << setw(3) << a[i][j]; 
        cout << endl;
    }
    return 0;
}
