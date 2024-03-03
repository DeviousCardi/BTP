#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d", &ti);
	if (ti<200000)
	{printf("%0.2f", tax=0);}
	else if (ti<500000)
	     {printf("%0.2f", tax=(ti-200000)/10.0);}
	     else if (ti<1000000)
	          {printf("%0.2f", tax=30000 + (ti-500000)*20/100.0);}
	          else printf("%0.2f", tax=130000 + (ti-1000000)*30/100.0);
	return 0; }