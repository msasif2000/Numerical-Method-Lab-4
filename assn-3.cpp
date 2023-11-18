#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    double x[n];
    double y[n], num;
    for(int i=0; i<n; i++)
        cin>>x[i];
    for(int i=0; i<n; i++)
    {
        cin>>num;
        y[i]=log(num);
    }
    double sumx=0, sumy=0, sumx2=0, sumxy=0;
    for(int i=0; i<n; i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumx2+=pow(x[i], 2);
        sumxy+=x[i]*y[i];
    }
    double a, b;
    b = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    a = (sumy/n)/(b*(sumx/n));
    double c = exp(b);
    b=c;


    cout<<"The exponential equation is: "<<endl<<"y = "<<a<<"e^("<<b<<"x)"<<endl;

    return 0;
}

