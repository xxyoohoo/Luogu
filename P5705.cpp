#include<iostream>
using namespace std;
int main()
{
    float n;
    int a,b,c,d;
    cin >> n;
    if((n<100.0)||(n>999.9))
    {
        cout << "error";
        return 1;
    }
    int m;
    m=n*10;
    a=m/1000%10;
    b=m/100%10;
    c=m/10%10;
    d=m%10;
    //cout << a << " " << b << " " << c << " "  << d <<endl;
    m=d*1000+c*100+b*10+a;
    n=m/10.0;
    cout << n;
}
