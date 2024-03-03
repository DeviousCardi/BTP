#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    int sum;int product;float average;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    product=a*b*c;
    average=(a+b+c)/3.0;
    printf("%d\n%d\n%.3f\n",sum,product,average);
	return 0; }