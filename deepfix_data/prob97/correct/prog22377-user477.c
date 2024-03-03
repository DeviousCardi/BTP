#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&a);
    for(b=0;b<a;b++) {
        for(c=1;c<2*a;c++)
        {if((c>=a-b)&&(c<=a+b))
        {printf("%d",(abs(c))%10); }
        else
        printf(" ");}
    printf("\n"); }
	return 0; }