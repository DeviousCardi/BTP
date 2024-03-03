#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    float average;
    sum=0;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    av=(a+b+c)/3;
    printf("\n%d\n%d,\n%.3f",sum,product,average);
	return 0; }