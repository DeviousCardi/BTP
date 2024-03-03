#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    printf("%d\n%d\n",sum,product);
    float average;
    average=sum/3;
    printf("%d",average);
	return 0; }