#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,h,m;
    cin >> a >> b >> c >> d;
    h=c-a;
    if(b>d)
    {
        h-=1;
        d+=60;
        //m=d-b;
    }
    else
    {
        //m=d-b;
    }
    m = d - b;
    cout << h << " " << m;
}

