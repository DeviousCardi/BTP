#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double x,y,sum=0,i=0,dell,area1,area2;
    int n;
    scanf("%lf\t",&x);
    scanf("%lf\t",&y);
    scanf("%d\n",&n);
    for(i=0;i<=n;i++) {
         dell=a+i*((b-a)/n);
        sum = sum + (-1)*pow(a+dell,2)+3*(a+dell); }
    area1=  sum;
    sum=0;
       for(i=0;i<=n;i++) {
               dell=a+i*((b-a)/n);
              sum = sum + 2*pow(a+dell,3) + (-1)*pow(a+dell,2) + (-dell5)*(a+dell); }
            area2=sum;
    printf("0.4%lf",abs(area1-area2));
     return 0; }