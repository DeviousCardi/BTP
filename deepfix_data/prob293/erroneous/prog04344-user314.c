#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{ if((a>b)&&(a>c))
	 {if(a*a>(b*b+c*c))
	   printf("Obtuse Triangle"); }
	 else{
	      printf(" Not Obtuse Triangle"); }
	 else(b>c)
	 {if(b*b>(a*a+c*c))
	   printf("Obtuse Triangle"); }
	 else{
	      printf(" Not Obtuse Triangle"); }
	 else
	 printf(" Cannot form a Triangle"); }
	return 0; }