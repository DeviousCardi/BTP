#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    float av;
    sum=0;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    av=(a+b+c)/3;
    printf("\nsum=%d,product=%d,average=%.3f",sum,product,av);
	return 0; }