#include <stdio.h>
#include <stdlib.h>
int main() {
    double a , b  , sub , f , g ,area;
    double x[1000] ;
    int n , i , j;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    sub = (b-a)/n;
    area = 0 ;
    x[0] = a ;
    for (i=1 ; i<n ; i++){
        x[i] = x[i-1] + sub ; }
    f = -(x[i]*x[i]) + 3*x[i];
    g = 2*(x[i]*x[i]*x[i]) - (x[i]*x[i]) - 5*x[i];
    for (i=0 ; i<n ; i++){
        if(x[i]<=0.0){area = area + (2*(x[i]*x[i]*x[i]) - 8*x[i] )*sub;}
        else {break;} }
    printf("%d",i);
     for(j=i ; j<n; j++){
         area = area + (3*(x[j]*x[j]*x[j]) - (x[j]*x[j]) - 8*x[j] )*sub; }
    printf("%.4lf",area);
	return 0; }