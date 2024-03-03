#include <stdio.h>
#include <stdlib.h>
int main() {
     int ti;
     float t;
     scanf("%d",&ti);
     if (ti<=200000)
     printf(" tax= 0")
     else if ( ti<=500,000)
     t=(ti-200000)/10;
     printf(".2%f",t);
     else if ( ti <= 1000000)
     t= 30,000+ (((ti-500000)*2)/10);
     printf(".2f",t);
     else
     t= 130000+ ((3* (ti - 1000000))/10)
	return 0; }