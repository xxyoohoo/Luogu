#include<iostream>
using namespace std;
int main()
{
    int a[10002],j=0,i=1,c=0;
    while(i==1)
    {
        cin >> a[j];
        if(a[j]==0&&a[j-1]==0)
        {
            i=2;
            j-=3;
        }
        ++j;
    }
    for(int i=j;i>=0;--i)
    {
        cout << a[i] << " ";
    }
}