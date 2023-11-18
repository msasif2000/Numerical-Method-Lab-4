#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

float dydx(float x, float y)
{
    return x+y;
}
int main()
{
    float x0=0;
    float y0=1;
    float h=0.1;
    float x=0.1;

    int n=(int)((x-x0)/h);
    float y= y0, k1, k2, k3, k4, k5;
    for(int i=1; i<=n; i++)
    {
        k1 = h*dydx(x0, y);
        k2 = h*dydx(x0 + 0.5*h, y + 0.5*k1);
        k3 = h*dydx(x0 + 0.5*h, y + 0.5*k2);
        k4 = h*dydx(x0 + h, y + k3);
        y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        x0=x0+h;
    }

    cout<<endl<<"Approximate solution using Runge-Kutta method at x = "<<x<<" is: "<<y<<endl;
    return 0;
}

