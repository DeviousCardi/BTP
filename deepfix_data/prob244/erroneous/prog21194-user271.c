#include <stdio.h>
#include <stdlib.h>
int main() {int ti;
scanf("%d",&ti);
if(ti<200000)
printf("0");
else if(200001<ti<500000)
printf("%.2d",(ti-200000)*10)/100);
else if(500001<ti<1000000)
printf("%.2d",30000+(ti-500000)*20/100);
else if(ti>1000001)
printf("%.2d",130000+(ti-1000000)*30/100);
	return 0; }