#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if (((a>=1)&&(b>=1)&&(c>=1))&&((a+b>c)&&(b+c>a)&&(c+a>b)))
	{if (((a*a+b*b)>(c*c))||((b*b+c*c)>(a*a))||((a*a+c*c)>(b*b)))
	{printf("Acute triangle");
	}else
	    {printf("not acute triangle");}
	   }else{
	   printf("Cannot form a Triangle");}
	   return 0; }