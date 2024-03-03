#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
     if(b+c<=a||a+b<=c||a+c<=b)
	  printf("Cannot form a triangle");
	 else if(c*c+b*b<=a*a)
	  printf("Not acute triangle");
	 else if(c*c+b*b>a*a)
	  printf("Acute triangle");
	 return 0; }