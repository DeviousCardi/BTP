#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    scanf("%d", &ti);
	if (ti<200000)
	{printf("tax = 0");}
	else if (ti<500000)
	     {printf("tax = (%d-200000)/10.0", ti);
	     else if (ti<1000000)
	          {printf("tax = 30000 + (%d-500000)*20/100.0", ti);
	          else printf("tax = 130000 + (%d-1000000)*30/100.0", ti); }} }
	return 0; }