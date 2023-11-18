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
    double y[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    double sumx=0, sumy=0, sumx2=0, sumxy=0;
    for(int i=0;i<n;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumx2+=pow(x[i], 2);
        sumxy+=x[i]*y[i];
    }
    double a, b;
    a = (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    b = (sumx2*sumy-sumx*sumxy)/(n*sumx2-sumx*sumx);

    cout<<"         x          y            x*x            xy"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
        cout<<"         "<<x[i]<<"          " <<y[i]<<"           "<<x[i]*x[i]<<"            "<<x[i]*y[i]<<endl;

    cout<<"---------------------------------------------------------------"<<endl;

    cout<<"sum=>    "<<sumx<<"          " <<sumy<<"         "<<sumx2<<"         "<<sumxy<<endl<<endl;

    cout<<"The linear fit line is: "<<endl<<"y = "<<a<<"x + "<<b<<endl;

return 0;
}

