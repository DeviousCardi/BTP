#include <stdio.h>
int main()
{float ms1,ms2,ms3,es1,es2,es3;
scanf ("%f%f%f%f%f%f",&ms1,&ms2,&ms3,&es1,&es2,&es3);
float  fm1=ms1*40/50.0+es1*60/100.0;
float  fm2=ms2*40/50.0+es2*60.0/100;
float  fm3=ms3*40/50.0+es3*60.0/100;
if ((fm1<fm2&&fm1>fm3)||(fm1>fm2&&fm1<fm3))
{printf("Median weighted score = %.2f",fm1);}
else if ((fm2<fm3&&fm2>fm1)||(fm2>fm3&&fm2<fm1))
{printf ("Median weighted score = %.2f",fm2);}
else if ((fm3<fm2&&fm3>fm1)||(fm3>fm2&&fm3<fm1))
{printf ("Median weighted score = %.2f",fm3);}
else (fm1==fm2&&fm2==fm3);
{printf ("Median weighted score = %.2f",fm1);}
	return 0; }