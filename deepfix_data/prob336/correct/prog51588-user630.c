#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
     if(b+c<=a||a+b<=c||a+c<=b)
	  printf("Cannot form a Triangle\n");
	 else if(c*c+b*b<=a*a||a*a+b*b<=c*c||a*a+c*c<=b*b)
	  printf("Not acute Triangle\n");
	 else
	  printf("Acute Triangle\n");
	 return 0; }