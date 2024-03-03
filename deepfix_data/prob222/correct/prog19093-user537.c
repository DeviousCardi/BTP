#include <stdio.h>
int main()
{float a,b,c,d,e,f;
  scanf("%f %f",&a,&b);
  scanf("%f %f",&c,&d);
  scanf("%f %f",&e,&f);
  float m1=a*40/50 + b*60/100;
  float m2=c*40/50 + d*60/100;
  float m3=e*40/50 + f*60/100;
  if(m1>=m2)
  { if(m1>=m3);
   else
   printf("Median weightaed score:%.3f",m1); }
  else
  {if(m3>=m2)
   printf("Median weightaed score:%.3f",m3);
   else
   printf("Median weightaed score:%.3f",m2); }
	return 0; }