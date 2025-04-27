#include<iostream>
using namespace std;
int main()
{
    int x,b=1,i;
    float a=2.0,t=2.0;
    cin >> x;
    for(i=1;t<x;++i)
    {
        a*=0.98;
        t+=a;
        ++b;
        //cout << "t=" << t <<" a="<< a << " b=" << b << endl; 
    }
    cout << "answer: " << b;
}
