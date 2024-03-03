#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
          if (((a*a+b*b)>(c*c)&&(a*a+c*c)>(b*b)&&(c*c+b*b)>(a*a)){
        printf("ACUTE TRIANGLE") }
     else { printf("NOT ACUTE TRIANGLE"); }
     {  printf("CANNOT FORM A TRIANGLE\n"); }
	return 0; }