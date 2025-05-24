#include<iostream>
using namespace std;
int main()
{
    int n,x,c=0,a[1001];
    cin >> n;
    for(int i=0;i<=1000;++i)
    {
        a[i]=0;
    }
    for(int i=0;i<n;++i)
    {
        cin >> x;
        a[x]=x;
    }
    for(int i=0;i<=1000;++i)
    {
        if(a[i]>=1) ++c;
    }
    cout << c << endl;
    for(int i=0;i<=1000;++i)
    {
        if(a[i]>=1) cout << a[i] << " ";
    }
}
