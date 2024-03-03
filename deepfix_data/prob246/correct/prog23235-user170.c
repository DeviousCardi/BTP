#include <stdio.h>
int main() {
    int a,b,c,sum,product;
    float average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    product=a*b*c;
    average=(a+b+c)/3;
    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%.3f",average);
	return 0; }