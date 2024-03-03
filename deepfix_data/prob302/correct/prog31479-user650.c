#include <stdio.h>
int main()
{float a,b,c,d,e,f;
scanf("%f %f\n",&a,&b);
scanf("%f %f\n",&c,&d);
scanf("%f %f",&e,&f);
if((a<e && e<c) && (b<f && f<d)){printf("Point is inside the rectangle.");}
else if((e==a || e==c) || (f==b || f==d)){printf("Point is on the rectangle.");}
else if((a==e && b==f) || (f==c && e==d)){printf("Point is on the rectangle.");}
else
printf("Point is outside the rectangle.");
	return 0; }