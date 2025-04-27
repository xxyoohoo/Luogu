#include<iostream>
using namespace std;
int main()
{
    int n,a[10001],c[10001];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        c[i]=0;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(a[j]<a[i]) c[i]++;
        }
    }
    for(int i=0;i<n;++i)
    {
        cout << c[i] << " ";
    }
}