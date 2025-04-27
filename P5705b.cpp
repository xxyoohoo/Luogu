#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    double a,c;
    int i=0,b=0;
    cin >> a;
    b=a*10;
    while(b!=0)
    {
        i=10*i+b%10;
        b/=10;
    }
    cout << "i=" << i << endl;
    c=i;
    while(c>=10)
    {
        c/=10;
    }
    cout << c;
}