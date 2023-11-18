#include<bits/stdc++.h>
#define lli long long int
#define dl double
#define pi 2*acos(0.0)
#define Min 10000000
#define Max -10000000
using namespace std;

double determinant(double mat[3][3])
{
    double det = (mat[0][0] *(mat[1][1]*mat[2][2] - mat[2][1]*mat[1][2]))-
    (mat[0][1] *(mat[1][0]*mat[2][2] - mat[2][0]*mat[1][2]))+
    (mat[0][2] *(mat[1][0] * mat[2][1] - mat[2][0]*mat[1][1]));
    return det;
}
int main()
{
    int n;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    double x[n];
    double y[n];
    for(int i=0; i<n; i++)
        cin>>x[i];
    for(int i=0; i<n; i++)
        cin>>y[i];
    double sumx=0, sumy=0, sumx2=0, sumxy=0, sumx3=0, sumx4=0, sumx2y=0;
    for(int i=0; i<n; i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumx2+=pow(x[i], 2);
        sumx3+=pow(x[i],3);
        sumx4+=pow(x[i],4);
        sumxy+=x[i]*y[i];
        sumx2y+=(pow(x[i],2)*y[i]);
    }

    double mat[3][3];
    mat[0][0] = n;
    mat[0][1] = sumx;
    mat[0][2] = sumx2;
    mat[1][0] = sumx;
    mat[1][1] = sumx2;
    mat[1][2] = sumx3;
    mat[2][0] = sumx2;
    mat[2][1] = sumx3;
    mat[2][2] = sumx4;

    double value[3];
    value[0] = sumy;
    value[1] = sumxy;
    value[2] = sumx2y;
    double det = determinant(mat);
    double ans[3];
    if(det == 0)
        cout << "No solution" <<endl;
    else
    {
        for(int k = 0; k< 3; k++)
        {
            double newMat[3][3];
            for(int i = 0; i< 3; i++)
            {
                for(int j = 0; j< 3; j++)
                {
                    if(j == k)
                    {
                        newMat[i][j] = value[i];
                    }
                    else
                    {
                        newMat[i][j] = mat[i][j];
                    }
                }
            }
            double nextDeterminate = determinant(newMat);
            ans[k] = nextDeterminate/det;
        }
    }
    cout<<"Least Square Parabola: y = "<<ans[0]<<" + "<<ans[1]<<"x + "<<ans[2]<<"x^2"<<endl;

    return 0;
}

