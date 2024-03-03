#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,sum=0,k,x;
	scanf("%d",&a);
    x=1;
    while(x<a) {
        a%x==0;
    k=x;
    sum=sum+k;
    if(a==sum)
    printf("YES\n");
    else
    printf("NO"); }
	return 0; }