#include <stdio.h>
#include <stdlib.h>
int main() {
     int ti;
     float t;
     scanf("%d",&ti);
     if (ti<=200000)
     printf("0.00");
     else if ( ti<=500000) {
         t=(ti-200000)/10.0;
     printf("%.2f",t); }
     else if ( ti <= 1000000) {
         t= 30000+ (((ti-500000)*2)/10.0);
     printf("%.2f",t); }
     else {
         t= 130000+ ((3* (ti - 1000000))/10.0);
     printf("%.2f",t); }
	return 0; }