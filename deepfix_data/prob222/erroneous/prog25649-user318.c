#include <stdio.h>
int main()
{float Am,Ae,Bm,Be,Cm,ce,a,b,c;
scanf("%f%f%f\n%f%f%f",&Am,&Bm,&Cm,&Ae,&Be,&Ce);
a=Am*40/50+Ae*60/100;
b=Bm*40/50+Be*60/100;
c=Cm*40/50+Ce*60/100;
if(a>=b) {
    if(b>=c)printf("%.2f",b);
    else {
      if(a>=c)printf("%.2f",c);
      else printf("%.2f",a); } }
else {
    if(a>=c)printf("%.2f",a);
    else {
       if(b>=c)printf("%.2f",c);
       else printf("%.2f",b); } }
	return 0; }