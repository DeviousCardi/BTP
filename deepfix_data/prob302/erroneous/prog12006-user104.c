#include <stdio.h>
int main()
{float a,b,c,d,e,f;
scanf("%f%f",&a,&b);
scanf("%f%f",&c,&d);
scanf("%f%f",&e,&f);
if(c>a)
{if(((e>a)&&(e<c))&&((f>b)&&(f<d)))
printf("Point is inside the rectangle.");
else if(((e==a)||(e==c))||((f==b)||f==d)))
printf("Point is on the rectangle.");
else
printf("Point is outside the rectangle."); }
else
{if(((e>c)&&(e<a))&&((f>d)&&(f<b)))
printf("Point is inside the rectangle.");
else if(((e==a)||(e==c))||((f==b)||f==d)))
printf("Point is on the rectangle.");
else
printf("Point is outside the rectangle.");
	return 0;} }