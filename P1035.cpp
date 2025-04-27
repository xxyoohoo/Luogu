#include<iostream>
using namespace std;
int k,i=1;
double s=1;
int main()
{
    cin >> k;
    while(s<=k)
    {
        ++i;
        s+=1.0/i;
    }
    cout << i << endl;
}