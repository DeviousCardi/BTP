#include <stdio.h>
int main()
{float ma,mb,mc,ea,eb,ec;
   scanf("%f%f%f\n",&ma,&mb,&mc);
   scanf("%f%f%f",&ea,&eb,&ec);
   float a =ma*0.8 + 0.6*ea;
   float b =mb*0.8 + 0.6*ea;
   float c =mc*0.8 + 0.6*ea;
   if((a>=b)&&(b>=c))
   printf ("Median weighted score = %.2f",b);
	else if((a>=c)&&(c>=b))
	printf ("Median weighted score = %.2f",c);
	else if((b>=c)&&(c>=a))
	printf ("Median weighted score = %.2f",c);
	else if((b>=a)&&(a>=c))
	printf ("Median weighted score = %.2f",a);
	else if((c>=a)&&(a>=b))
	printf ("Median weighted score = %.2f",a);
	else if((c>=b)&&(b>=a))
	printf ("Median weighted score = %.2f",b);
	return 0; }