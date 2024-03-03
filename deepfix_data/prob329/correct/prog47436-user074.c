#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if(a!=0&&b!=0&&c!=0)
	 { if(c>a &&c>b);
	  else
	   {if(a>b && a>c)
	      { temp=a;
	        a=c;
	        c=temp; }
	     else
	      {if(b>c && b>a)
	          {temp=b;
	           b=c;
	           c=temp; } } }
	   if(a*a+b*b==c*c) {
	       printf("Right Triangle"); }
	   else
	   { if(a+b<=c||a-b>c)
	      {printf("Cannot form a Triangle");}
	     else
	       {if(a*a+b*b!=c*c )
	         printf("Not Right Triangle"); } } }
	 else
	   printf("Cannot form a triangle");
	return 0; }