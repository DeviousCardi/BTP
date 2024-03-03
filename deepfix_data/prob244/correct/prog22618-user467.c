#include <stdio.h>
#include <stdlib.h>
int main() {
            int a; double t;
             scanf("%d",&a);
             scanf("%lf",&t);
             if (a<=200000) {
                 printf("%.2lf",t=0); }
             if ((a>200000)&&(a<500000)) {
                 printf("%.2lf",t=((0.1)*(a-200000))); }
             if ((a>=500000)&&(a<=1000000)) {
                 printf("%.2lf",t=((0.3)*(a-1000000))); }
              if (a>1000000) {
                 printf("%.2lf",t=(130000 + (0.3)*(a-1000000.00))); }
	return 0; }