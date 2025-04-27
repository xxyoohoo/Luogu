#include<iostream>
using namespace std;

int main()
{
    double n,cost=0;
    cin >> n;
    if(n<=150)
    {
        cost=n*0.4463;
    }else if(n<=400)
    {
        cost=150*0.4463+(n-150)*0.4663;
    }else
    {
        cost=150*0.4463+250*0.4663+(n-400)*0.5663;
    }
    printf("%.1f",cost);
}
// 3,6,10