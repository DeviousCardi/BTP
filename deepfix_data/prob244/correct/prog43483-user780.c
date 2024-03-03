#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti;
	scanf("%f",&ti);
	if(ti<=200000)
		printf("0.00");
		else if(ti<=500000)
		printf("%.2f",(ti-200000)/10);
          else if(ti<=1000000)
          printf("%.2f",30000+(ti-500000)/5);
            else if(ti>1000000)
	           printf("%.2f",130000+(ti-1000000)*3/10);
	return 0; }