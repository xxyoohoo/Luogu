#include<iostream>
using namespace std;
int main()
{
    int n,m=0,a[10000],b=0;
    cin >> n;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;++i)
    {
        b=1;
        for(int j=i+1;j<=n;++j)
        {
            if(a[j]>a[j-1])
            {
                b++;
            }else break;
        }
        if(b>m)
            m=b;
    }
    cout << m;
    return 0;
}