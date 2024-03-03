#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b;
    scanf ("%lf%lf",&a,&b);
    int n;
    scanf ("%d",&n);
    double area;
    float x[10000],f[10000],g[10000];
    for (i=0;i<n;i++) {
        x[i] = a + (b-a)*i/n;
        f[x[i]] = -x[i]*x[i] + 3*x[i]; }
    return 0; }