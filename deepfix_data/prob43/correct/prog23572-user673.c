#include <stdio.h>
#include <stdlib.h>
int main() {
    double a , b  , sub , f , g ,area;
    double x[1000] ;
    int n , i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    sub = (b-a)/n;
    x[0] = a ;
    for (i=1 ; i<n ; i++){
        x[i] = x[i-1] + sub ;
        printf("lf",x[i]); }
    f = -(x[i]*x[i]) + 3*x[i];
    g = 2*(x[i]*x[i]*x[i]) - (x[i]*x[i]) - 5*x[i];
    area = 0.0;
    for (i=0 ; i<n ; i++){
        area = area + (f-g)*sub; }
    printf("%lf",area);
	return 0; }