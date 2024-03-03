#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    double a,b;
    int i=0,n;
    scanf("%lf%lf%d",&a,&b,&n);
    double sum=0,x[n],delta x=(b-a)/n;
    for (i=0;i<=n;i++) {
        x[i]=a+i*(b-a)/n; }
    for (i=0;i<=n;i++) {
       sum=(sum + abs(8*x[i] - 2*x[i]*x[i]*x[i]))*delta x; }
    printf(".4lf",sum);
    return 0; }