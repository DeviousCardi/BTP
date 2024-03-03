#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    printf("%d\n%d\n",sum,product);
    float average;
    average=sum/3;
    printf("%0.3f",average);
	return 0; }