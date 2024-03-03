#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&a);
    d=0;
    for(b=0;b<a;b++) {
        for(c=1;c<2*a-1;c++)
        {if((c>=a-b)&&(c<=a+b))
        {printf("%d",(abs(a-d))%10);
        d=d+1;}
        else
        printf(" ");}
    printf("\n"); }
	return 0; }