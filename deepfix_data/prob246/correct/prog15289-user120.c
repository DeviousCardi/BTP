#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d""%d""%d",&a,&b,&c);
    float avg;
    int sum,product;
    sum=a+b+c;
    product=a*b*c;
    avg=(float)sum/3;
    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%.3f",avg);
	return 0; }