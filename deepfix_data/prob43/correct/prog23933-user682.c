#include <stdio.h>
#include <stdlib.h>
float mod(float a,float b) {
    float p;
    if (a>b)
    p=a-b;
    else
    p=b-a;
    return p; }
int main() {
    double a,b,sum=0;
    scanf ("%lf%lf",&a,&b);
    int n,i;
    scanf ("%d",&n);
    float x[10000],f,g;
    for (i=0;i<n;i++) {
        x[i] = a + (b-a)*i/n;
        g = 2*x[i]*x[i]*x[i] - x[i]*x[i] - 5*x[i];
        f = -x[i]*x[i] + 3*x[i];
        sum=sum+(mod(f,g)*(b-a)/n); }
    printf ("%lf",sum);
    return 0; }