#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,s=0,f=1,n,j;
    cin >> n;
    for(i=1;i<=n;++i)
    {
        f*=i;
        s+=f;
    }
    cout << s;
}
