//https://www.luogu.com.cn/record/218190260
//https://vjudge.net/solution/60880872/jPYZ2EUGI7VNeXAFj64L
#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,z,r,a[1000][1000];
void cc(int sz)
{
    int t=x-r,l=y-r,b[1000][1000];
    for(int i=0;i<sz;++i) for(int j=0;j<sz;++j) b[sz-1-j][i]=a[t+i][l+j];
    for(int i=0;i<sz;++i) for(int j=0;j<sz;++j) a[t+i][l+j]=b[i][j];
}
void c(int sz)
{
    int t=x-r,l=y-r,b[1000][1000];
    for(int i=0;i<sz;++i) for(int j=0;j<sz;++j) b[j][sz-1-i]=a[t+i][l+j];
    for(int i=0;i<sz;++i) for(int j=0;j<sz;++j) a[t+i][l+j]=b[i][j];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i=0;i<n;++i) for(int j=0;j<n;++j) a[i][j]=i*n+j+1;
    for(int i=0;i<m;++i)
    {
        cin >> x >> y >> r >> z;
        --x;--y;
        if(z==1) cc(2*r+1);
        else c(2*r+1);
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
