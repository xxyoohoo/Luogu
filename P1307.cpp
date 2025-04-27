#include<iostream>
using namespace std;
int main()
{
    int n,m,t,i=1,a[11];
    cin >> n;
    m=n;
    if(n>0) n=-n;
    while(n!=0)
    {
        t=n%10;
        n=n/10;
        a[i]=t;
        ++i;
    } 
    for(int j=1;j<i;++j)
    {
            cout << a[j];
    }
    return 0;
}
