#include <stdio.h>
int main()
{float a1,a2,b2,b1,c2,c1;
scanf("%f %f %f\n%f %f %f",&a1,&b1,&c1,&a2,&b2,&c2);
float ta=40.0/50.0*a1+60*a2/100.0;
float tb=40.0/50.0*b1+60*b2/100.0;
float tc=40.0/50.0*c1+60*c2/100.0;
if((ta>=tb&&tb>=tc)||(ta<=tb&&tb<=tc))
printf("Median weighted score = %.2f",tb);
else if((tb>=ta&&ta>=tc)||(tb<=ta&&tc>=ta))
printf("Median weighted score = %.2f",ta);
else if((tc>=tb&&tc<=ta)||(tc<=tb&&ta<=tc))
printf("Median weighted score = %.2f",tc);
return 0; }