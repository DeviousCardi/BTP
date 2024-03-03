#include <stdio.h>
#include <stdlib.h>
int main() {
	         int a,b,c;
	       scanf("%d%d%d",&a,&b,&c);
	  if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b))
	  printf("Cannot form a Triangle");
	  else {
	      if(b>c&&b>a) {
	        if(b*b<(a*a+c*c))
	        printf("acute tringle");
	        else
	        printf("not acute triangle") ; }
	      if(c>a&&c>b) {
	        if(c*c<(a*a+b*b))
	        printf("acute triangle");
	        else
	        printf("not acute triangle"); } }
           return 0; }