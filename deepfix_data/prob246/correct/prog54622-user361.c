#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    float av;
    printf("enter the three integer");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    av=(a+b+c)/3;
    printf("sum=%d,product=%d,average=%f",sum,product,av);
	return 0; }