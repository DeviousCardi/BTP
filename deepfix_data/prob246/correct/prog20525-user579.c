#include<stdio.h>
int main() {
    int sum,product,a,b,c;
    float average;
    scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
product=a*b*c;
average=sum/3;
printf("%d",sum);
printf("\n%d",product);
printf("\n%f",average);
return 0; }