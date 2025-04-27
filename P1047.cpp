#include<iostream>
using namespace std;
int main()
{
    int n,c=0,m,x=0,y=0,a[10000]={1};
    cin >> n >> m;
    for(int i=0;i<=n;++i)
    {
        a[i]=1;
    }
    for(int i=1;i<=m;++i)
    {
        cin >> x >> y;
        for(int j=x;j<=y;++j)
        {
            a[j]=0;
        }
    }
    for(int i=0;i<=n;++i)
    {
        c+=a[i];
    }
    cout << c;
}