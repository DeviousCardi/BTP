#include <stdio.h>
#include <stdlib.h>
int main() {
             float a; double t;
             scanf("%f",&a);
             scanf("%lf",&t);
             if (a<=200000.00) {
                 printf("%lf",t=0.00); }
             if ((a>200000.00)&&(a<500000.00)) {
                 printf("%lf",t=((1/10)*(a-200000.00))); }
             if ((a>=500000.00)&&(a<=1000000.00)) {
                 printf("%lf",t=((3/10)*(a-1000000.00))); }
              if (a>500000.00) {
                 printf("%lf",t=(130000 + (3/10)*(a-1000000.00)));}
	return 0; }