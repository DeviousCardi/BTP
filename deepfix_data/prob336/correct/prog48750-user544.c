#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
    if((a*a+b*b)>(c*c)||(a*a+c*c)>(b*b)||(c*c+b*b)>(a*a)) {
        printf("ACUTE TRIANGLE\n"); }
       else {  printf("NOT ACUTE TRIANGLE\n"); }
           {  printf("CANNOT FORM A TRIANGLE\n"); }
	return 0; }