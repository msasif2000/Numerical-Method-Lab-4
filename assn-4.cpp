#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

float func(float x, float y)
{
    return x*x*x+y;
}
int main()
{
    float x0=0.5;
    float y0=1;
    float h=0.01;
    float x=0.02;

    float temp=-0;
    float y=y0;
    while(x0<x)
    {
        temp=y;
        y=y+h*func(x0, y);
        x0=x0+h;
    }

    cout<<endl<<"Approximate solution at x = "<<x<<" is: "<<y<<endl;
    return 0;
}


