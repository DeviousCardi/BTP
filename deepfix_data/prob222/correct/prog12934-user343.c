#include <stdio.h>
int main() {
	float ma,mb,mc,ea,eb,ec,ta,tb,tc;
	scanf("%f%f%f",&ma,&mb,&mc);
	scanf("%f%f%f",&ea,&eb,&ec);
	ta=ma*40.0/50.0 + ea*60.0/100.0;
	tb=mb*40.0/50.0 + eb*60.0/100.0;
	tc=mc*40.0/50.0 + ec*60.0/100.0;
	if ((ta>tb && ta<tc) || (ta>tc && ta<tb))
	   printf("Median weighted score = %.2f\n",ta);
	else if ((tb>ta && tb<tc) || (tb>tc && tb<ta))
	   printf("Median weighted score = %.2f\n",tb);
	else
	   printf("Median weighted score = %.2f\n",tc);
	return 0; }