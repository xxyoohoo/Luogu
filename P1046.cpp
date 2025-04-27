#include<iostream>
using namespace std;
int main()
{
    int a[11],c=0,x,i;
    for(i=1;i<=10;++i)
    {
        cin >> a[i];
    }
    cin >> x;
    for(i=1;i<=10;++i)
    {
        if(a[i]<=x) ++c;
    }
    cout << c;
}